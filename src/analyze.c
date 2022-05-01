#include "globals.h"
#include "symtab.h"
#include "analyze.h"
#include "util.h"


ScopeList global;

static char a[] = "Global";
static char * funcName = a;

static int flag = 0;
static int stay = 0;

/* contador para local de memoria */
static int location = 0;

/* funcao de rotina de travessia de arvore de sintaxe recursiva generica, 
aplica preProc em pre ordem e postProc em pos ordem a arvore apontada por */

static void traverse( TreeNode * t,
               void (* preProc) (TreeNode *),
               void (* postProc) (TreeNode *) )
{ if (t != NULL)
  { preProc(t);
    { int i;
      for (i=0; i < MAXCHILDREN; i++)
        traverse(t->child[i],preProc,postProc);
    }
    postProc(t);
    traverse(t->sibling,preProc,postProc);
  }
}

/* nullProc e um procedimento do-nothing para gerar travessias 
somente de pre ordem ou somente de pos ordem a partir da travessia */

static void nullProc(TreeNode * t)
{ if (t==NULL) return;
  else return;
}

static void symbolError(TreeNode *t, char *message){
  fprintf(listing, "Symbol error at line %d: %s\n",t->lineno, message);
}

static void forPop( TreeNode * t){
  if(t->nodekind == StmtK){
    if(t->kind.stmt == CompK){
      scope_pop();
      ScopeList sc = scope_top();
      funcName = sc->name;
    }
  }
}

/* insertNode insere identificadores stored in t into 
 * the symbol table 
 */
static void insertNode( TreeNode * t)
{
  switch (t->nodekind)
  { 
    case StmtK:
      switch(t->kind.stmt){
        case IfK:
          if(t->child[2])
            flag = 1;
          funcName = ".if";

          break;

        case WhileK:
          flag = 3;
          break;

        case CompK:
          
          if(stay == 1){
            stay = 0;
            flag = 0;
          }else{
            if(flag == 1){
              flag = 2;
            }
            else if(flag == 2){
              funcName = ".else";
              flag = 0;
            }
            else if(flag == 3){
              funcName = ".while";
              flag = 0;
            }
            scope_push(scope_create(funcName));
          }
          t->scope = scope_top();

          break;

        default:
          break;
      }
      break;
      
    case ExpK:
      switch(t->kind.exp){
        case OpK:
          break;
        case ConstK:
          break;

        case IdK:
        case CallK:
        case ArrIdK:
          if(st_lookup(t->attr.name)){
            just_add_line(t->attr.name, t->lineno);
          }else{
            symbolError(t, "Undeclared");
            break;
          }
        
        default:
          break;
      }
      break;

    case DecK:
      switch(t->kind.dec){
        case FunK:

          if(st_lookup_excluding_parent(funcName, t->attr.name)) {
            symbolError(t, "function already declared in same scope");
            break;
          }

          st_insert( funcName, t->attr.name, t->type, t->lineno, addLocation(), t);
          scope_push(scope_create(t->attr.name));
          funcName = t->attr.name;

          stay = 1;
          break;

        case VarK:

          if(st_lookup_excluding_parent(funcName, t->attr.name)){
            symbolError(t, "Var already declared in same scope");
            break;
          }
          st_insert( funcName, t->attr.name, t->type, t->lineno, addLocation(), t);
          break;

        case ParamK:
          if(t->type != Void){
            st_insert(funcName, t->attr.name, t->type, t->lineno, addLocation(), t);
          }
          break;
        
        default:
          break;
      }
      break;

    default:
      break;
  }
}

static void inoutput(){
  
  TreeNode *input;

  input = newDecNode(VarK);
  input->type = Integer;

  input->kind.dec = FunK;
  input->attr.name = (char*)malloc(strlen("input")+1);
  strcpy(input->attr.name, "input");
  input->child[0] = NULL;
  input->child[1] = NULL;

  
  TreeNode *output;

  output = newDecNode(VarK);
  output->type = Void;

  output->kind.dec = FunK;
  output->attr.name = (char*)malloc(strlen("output")+1);
  strcpy(output->attr.name, "output");
  output->child[0] = NULL;
  output->child[1] = NULL;

  st_insert(funcName, input->attr.name, input->type, 0, addLocation(), input);
  st_insert(funcName, output->attr.name, output->type, 0, addLocation(), output);

}
/* Function buildSymtab constructs the symbol 
 * table by preorder traversal of the syntax tree
 */
void buildSymtab(TreeNode * syntaxTree)
{
  global = scope_create(funcName);
  scope_push(global);
  inoutput();
  traverse(syntaxTree,insertNode,forPop);

  scope_pop();

  if (TraceAnalyze)
  { fprintf(listing,"\nTabela de simbolos:\n\n");
    printSymTab(listing);
  }
}

static void typeError(TreeNode * t, char * message)
{ fprintf(listing,"Erro de tipagem na linha: %d: %s\n",t->lineno,message);
  Error = TRUE;
}



/* Procedure checkNode performs
 * type checking at a single tree node
 */

static void forPush (TreeNode *t){
  switch (t->nodekind)
  { 
    case StmtK:
      switch(t->kind.stmt){
        case IfK:
          //funcName = strcat(funcName, ".IF");
          break;

        case WhileK:
          //funcName = strcat(funcName, ".WHILE");
          break;

        case CompK:
          scope_push(t->scope);

          break;

        default:
          break;
      }
      break;

    case DecK:
      switch(t->kind.dec){
        case FunK:
          funcName = t->attr.name;
          break;
      }
      break;

    default:
      break;
  }
}
static void checkNode(TreeNode * t)
{ 
  //fprintf(listing, "%d\n", t->lineno);
switch (t->nodekind)
  {

    case StmtK:
      switch (t->kind.stmt)
      { 
        case IfK:
          if(t->child[0]->type == Void)
            typeError(t->child[0], "void só funciona em funções");
          break;

        case WhileK:
          if(t->child[0]->type == Void)
            typeError(t->child[0], "void só é permitido em funções");
          break;

        case CompK:
          scope_pop();
          funcName = scope_top()->name;
          break;

        case RetK:
        {
          ExpType FuncType = st_lookup(funcName)->type;

          if(FuncType == Void && (t->child[0] != NULL || t->child[0]->type != Void))
            typeError(t, "função void deve retornar void");
          else if(FuncType == Integer && (t->child[0] == NULL || t->child[0]->type != Integer))
            typeError(t, "função inteira deve retornar inteiro");
          break;
        }
        default:
          break;
      }
      break;

    case ExpK:

      switch (t->kind.exp)
      { 
        case OpK:{
          
          ExpType left = t->child[0]->type;
          ExpType right = t->child[1]->type;
          TokenType op = t->attr.op;

          if( left == Void ){
              typeError(t->child[0], "tipo void só é permitido em funções");
            }
          if( right == Void ){
            typeError(t->child[1], "tipo void só é permitido em funções");
          }
          
          if(op == ASSIGN){
            if( left != right ){
              typeError(t->child[0], "two operands should be same type when assign");
            }
            else
              t->type = t->child[0]->type;
          }else{
            if( left != right ){
              typeError(t->child[0], "two operands should be same type");
            }
            else if(left == Array && right == Array)
              typeError(t, "two operands shoud not be array");

            else if(op == MINUS && left == Integer && right == Array)
              typeError(t, "minus no int - array");
            
            else if( (op == TIMES || op == OVER) && (left == Array || right == Array) )
              typeError(t, "no times or over in array");
            
            else
              t->type = Integer;
          }
          break;
        }
        case ConstK:
          t->type = Integer;
          break;

        case IdK:{

          BucketList b = st_lookup(t->attr.name);
          if(b == NULL){
            break;
          }

          t->type = b->type;
          break;
          }

        case ArrIdK:{
          BucketList b = st_lookup(t->attr.name);
          
          if(b == NULL){
            break;
          }

          if(t->child[0]->type != Integer)
            typeError(t->child[0], "exp should be Integer");
          else{
            t->type = Integer;
          }

          break;
        }

        case CallK:{
          BucketList b = st_lookup(t->attr.name);
          
          if(b == NULL)
            break;

          TreeNode *args = t->child[0];
          TreeNode *params = b->treenode->child[0];

          while(params != NULL){
            if(args == NULL){
              typeError(args, "num(args) and num(params) should be same");
              break;
            }
            else if(args->type == Void){
              typeError(args, "void is only available for function");
              break;
            }
            else if(args->type != params->type){
              typeError(args, "args and params should have same type");
              break;
            }
            else{
              args = args->sibling;
              params = params->sibling;
            }
          }

          t->type = b->type;
          break;
        }

        default:
          break;
      }
      break;

    case DecK:
      break;

    default:
      break;

  }
}

/* Procedure typeCheck performs type checking 
 * by a postorder syntax tree traversal
 */
void typeCheck(TreeNode * syntaxTree)
{ 
  scope_push(global);
  traverse(syntaxTree,forPush,checkNode);
  scope_pop();
}
