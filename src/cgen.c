
#include "../lib/cgen.h"
#include "../lib/arvore.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../lib/symtab.h"


bool TraceCode = true;

/* MAXRESERVED = the number of reserved words */
#define MAXRESERVED 8

FILE* source; /* source code text file */
FILE* listing; /* listing output text file */
FILE* code; /* code text file for TM simulator */

/* TM location number for current instruction emission */
static int emitLoc = 0 ;

/* Highest TM location emitted so far
   For use in conjunction with emitSkip,
   emitBackup, and emitRestore */
static int highEmitLoc = 0;




/* Procedure emitComment prints a comment line 
 * with comment c in the code file
 */
void emitComment( char * c )
{ if (TraceCode) fprintf(code,"* %s\n",c);}

/* Procedure emitRO emits a register-only
 * TM instruction
 * op = the opcode
 * r = target register
 * s = 1st source register
 * t = 2nd source register
 * c = a comment to be printed if TraceCode is TRUE
 */
void emitRO( char *op, int r, int s, int t, char *c)
{ fprintf(code,"%3d:  %5s  %d,%d,%d ",emitLoc++,op,r,s,t);
  if (TraceCode) fprintf(code,"\t%s",c) ;
  fprintf(code,"\n") ;
  if (highEmitLoc < emitLoc) highEmitLoc = emitLoc ;
} /* emitRO */

/* Procedure emitRM emits a register-to-memory
 * TM instruction
 * op = the opcode
 * r = target register
 * d = the offset
 * s = the base register
 * c = a comment to be printed if TraceCode is TRUE
 */
void emitRM( char * op, int r, int d, int s, char *c)
{ fprintf(code,"%3d:  %5s  %d,%d(%d) ",emitLoc++,op,r,d,s);
  if (TraceCode) fprintf(code,"\t%s",c) ;
  fprintf(code,"\n") ;
  if (highEmitLoc < emitLoc)  highEmitLoc = emitLoc ;
} /* emitRM */

/* Function emitSkip skips "howMany" code
 * locations for later backpatch. It also
 * returns the current code position
 */
int emitSkip( int howMany)
{  int i = emitLoc;
   emitLoc += howMany ;
   if (highEmitLoc < emitLoc)  highEmitLoc = emitLoc ;
   return i;
} /* emitSkip */

/* Procedure emitBackup backs up to 
 * loc = a previously skipped location
 */
void emitBackup( int loc){ 
   if (loc > highEmitLoc) emitComment("BUG in emitBackup");
   emitLoc = loc ;
} /* emitBackup */

/* Procedure emitRestore restores the current 
 * code position to the highest previously
 * unemitted position
 */
void emitRestore(void)
{ emitLoc = highEmitLoc;}

/* Procedure emitRM_Abs converts an absolute reference 
 * to a pc-relative reference when emitting a
 * register-to-memory TM instruction
 * op = the opcode
 * r = target register
 * a = the absolute location in memory
 * c = a comment to be printed if TraceCode is TRUE
 */
void emitRM_Abs( char *op, int r, int a, char * c)
{ fprintf(code,"%3d:  %5s  %d,%d(%d) ",
               emitLoc,op,r,a-(emitLoc+1),pc);
  ++emitLoc ;
  if (TraceCode) fprintf(code,"\t%s",c) ;
  fprintf(code,"\n") ;
  if (highEmitLoc < emitLoc) highEmitLoc = emitLoc ;
} /* emitRM_Abs */

// bool TraceCode = true;

// statement IF WHILE CONDICIONAL que tem scopo
// expression 

/* tmpOffset is the memory offset for temps
   It is decremented each time a temp is
   stored, and incremeted when loaded again
*/
static int tmpOffset = 0;

/* prototype for internal recursive code generator */
// static void cGen (TreeNode * tree);

// // void gerarCodigo(AST*, char *)

// /* Procedure genStmt generates code at a statement node */
static void genStmt( AST * tree){ 
   AST * p1, * p2, * p3;
  int savedLoc1,savedLoc2,currentLoc;
  int loc;
  switch (tree->tipoDeNo) {

      case Condicao :
         if (TraceCode) emitComment("-> if") ;
         p1 = tree->filho1 ;
         p2 = tree->filho2 ;
         p3 = tree->filho3 ;
         /* generate code for test expression */
         cGen(p1);
         savedLoc1 = emitSkip(1) ;
         emitComment("if: jump to else belongs here");
         /* recurse on then part */
         cGen(p2);
         savedLoc2 = emitSkip(1) ;
         emitComment("if: jump to end belongs here");
         currentLoc = emitSkip(0) ;
         emitBackup(savedLoc1) ;
         emitRM_Abs("JEQ",ac,currentLoc,"if: jmp to else");
         emitRestore() ;
         /* recurse on else part */
         cGen(p3);
         currentLoc = emitSkip(0) ;
         emitBackup(savedLoc2) ;
         emitRM_Abs("LDA",pc,currentLoc,"jmp to end") ;
         emitRestore() ;
         if (TraceCode)  emitComment("<- if") ;
         break; /* if_k */

      case Repeticao:
         if (TraceCode) emitComment("-> repeat") ;
         p1 = tree->filho1 ;
         p2 = tree->filho2 ;
         savedLoc1 = emitSkip(0);
         emitComment("repeat: jump after body comes back here");
         /* generate code for body */
         cGen(p1);
         /* generate code for test */
         cGen(p2);
         emitRM_Abs("JEQ",ac,savedLoc1,"repeat: jmp back to body");
         if (TraceCode)  emitComment("<- repeat") ;
         break; /* repeat */

      case Atribuicao:
         if (TraceCode) emitComment("-> assign") ;
         /* generate code for rhs */
         cGen(tree->filho1);
         /* now store value */
         loc = st_lookup(tree->nome_regra);
         emitRM("ST",ac,loc,gp,"assign: store value");
         if (TraceCode)  emitComment("<- assign") ;
         break; /* assign_k */
      default:
         break;
    }
} /* genStmt */

// /* Procedure genExp generates code at an expression node */
static void genExp( AST * tree) { 
   int loc;
   AST * p1, * p2;
   switch (tree->tipoToken) {
      case Identificador :
         if (TraceCode) emitComment("-> Id") ;
         loc = st_lookup(tree->nome_regra);
         emitRM("LD",ac,loc,gp,"load id value");
         if (TraceCode)  emitComment("<- Id") ;
         break; /* IdK */

      case Operacao :
            if (TraceCode) emitComment("-> Op") ;
            p1 = tree->filho1;
            p2 = tree->filho2;
            /* gen code for ac = left arg */
            cGen(p1);
            /* gen code to push left operand */
            emitRM("ST",ac,tmpOffset--,mp,"op: push left");
            /* gen code for ac = right operand */
            cGen(p2);
            /* now load left operand */
            emitRM("LD",ac1,++tmpOffset,mp,"op: load left");
            switch (tree->tipoToken) {
               case MAIS :
                  emitRO("ADD",ac,ac1,ac,"op +");
                  break;
               case MENOS :
                  emitRO("SUB",ac,ac1,ac,"op -");
                  break;
               case MULTIPLICADO :
                  emitRO("MUL",ac,ac1,ac,"op *");
                  break;
               case DIVIDIDO :
                  emitRO("DIV",ac,ac1,ac,"op /");
                  break;
               case MENOR :
                  emitRO("SUB",ac,ac1,ac,"op <") ;
                  emitRM("JLT",ac,2,pc,"br if true") ;
                  emitRM("LDC",ac,0,ac,"false case") ;
                  emitRM("LDA",pc,1,pc,"unconditional jmp") ;
                  emitRM("LDC",ac,1,ac,"true case") ;
                  break;
               default:
                  emitComment("BUG: Unknown operator");
                  break;
            } /* case op */
            if (TraceCode)  emitComment("<- Op") ;
            break; /* OpK */

      default:
         break;
   }
}

/* Procedure cGen recursively generates code by
 * tree traversal
 */
void cGen( AST * tree){ 
   if (tree != NULL) {
      switch (tree->tipoDeNo) {
         case Condicao:
             genStmt(tree);
             break;
         case Repeticao:
             genStmt(tree);
             break;
         case Atribuicao:
            genStmt(tree);
            break;
         case Identificador:
            genExp(tree);
            break;
         case Operacao:
            genExp(tree);
            break;
         default:
         break;
    }
    cGen(tree->proximo);
  }
}


void gerarCodigo(AST* syntaxTree, char * nome){  
   char * s = malloc(strlen(nome)+7);
   code = fopen("output.tm","wa");
   fprintf(code, "Change Case \n");

   strcpy(s,"File: ");
   strcat(s,"fatorial");
   printf("\n___________________GERANDO CODIGO__________________________\n");
   emitComment("Standard prelude:");
   emitRM("LD",mp,0,ac,"load maxaddress from location 0");
   emitRM("ST",ac,0,ac,"clear location 0");
   emitComment("End of standard prelude.");
   cGen(syntaxTree);
   emitComment("End of execution.");
   emitRO("HALT",0,0,0,"");

   fclose(code);
}
