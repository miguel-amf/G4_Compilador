%define lr.type canonical-lr
%define parse.error verbose
%defines "../lib/sintatico.tab.h"

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "../lib/arvore.h"
    extern int yylex();
    extern int yylex_destroy();
    extern void yyerror(const char* s);
    extern FILE *yyin;
    AST* raiz;
%}

%union{
    struct AST* ast;
}

%token ID
%token INT
%token FLOAT
%token TIPO_INT
%token TIPO_FLOAT
%token TIPO_LIST_INT
%token TIPO_LIST_FLOAT
%token OP_B_SOMA_SUB
%token OP_B_MULT_DIV
%token OP_LOGICA_AND
%token OP_LOGICA_NEG
%token OP_LOGICA_OR
%token OP_B_RELACIONAIS
%token IF
%token ELSE
%token FOR
%token RETORNO
%token ENTRADA
%token SAIDA
%token CONSTRUTOR_LISTA
%token OP_LISTA
%token FUNCOES_LISTA
%token STRING
%token NIL
%token ABRE_PARENTESES
%token FECHA_PARENTESES
%token ABRE_CHAVES
%token FECHA_CHAVES
%token ATRIBUICAO
%token VIRGULA
%token PONTOVIRGULA
%token COLCHETES

%type <ast> programa;
%type <ast> listaDeDeclaracoes;
%type <ast> declaracao;
%type <ast> TIPO;
%type <ast> declaracaoVariavel;
%type <ast> declaracaoFuncao;
%type <ast> listaDeParametros
%type <ast> corpo;
%type <ast> dentroCorpo;
%type <ast> declaracoes;
%type <ast> expressao;
%type <ast> for;
%type <ast> condicional;
%type <ast> exp;
%type <ast> expressaoList;
%type <ast> expressao_logica;
%type <ast> expressao_relacional;
%type <ast> opSomaSub;
%type <ast> opMultDiv;
%type <ast> argumento;
%type <ast> chamadaDeFuncao;
%type <ast> entrada;
%type <ast> saida;
%type <ast> retorno;
%type <ast> nil;
%type <ast> numero;


%%
programa:
    listaDeDeclaracoes {
        $$ = criaNo("programa");
        $$->pai = $1;
        raiz = $$;
    }
;

listaDeDeclaracoes: 
    listaDeDeclaracoes declaracao {
        $$ = criaNo("lista De Declaracoes");
        $$->pai = $1;
        $1->filho = $2;
    }
    | declaracao {
        $$ = $1;
    }
;

TIPO:
    TIPO_INT {
        $$ = criaNo("INT");
    }
    | TIPO_FLOAT {
        $$ = criaNo("FLOAT");
    }
    | TIPO_LIST_INT {
        $$ = criaNo("INT LIST");
    }
    | TIPO_LIST_FLOAT {
        $$ = criaNo("FLOAT LIST");
    }
;

declaracao:
    declaracaoVariavel {
        $$ = $1;
    }
    | declaracaoFuncao {
        $$ = $1;
    }
    | error {}
;

declaracaoVariavel: 
    TIPO ID PONTOVIRGULA {
        $$ = criaNo("Declaracao de Variavel");
        $$->pai = $1;
    }
;

declaracaoFuncao:
    TIPO ID ABRE_PARENTESES listaDeParametros FECHA_PARENTESES corpo {
        $$ = criaNo("Declaracao de funcao");
        $$->pai = $1;
        $1->filho = $4;
        $4->filho = $6;
    }
;

listaDeParametros:
    TIPO ID VIRGULA listaDeParametros {
        $$ = criaNo("Lista de Parametros");
        $$->pai = $1;
        $1->filho = $4;
    }
    | TIPO ID {
        $$ = criaNo("Lista de Parametros");
        $$->pai = $1;
    }
    |  {
        $$ = criaNo("Lista de Parametros vazia");
    }
;

corpo:
    ABRE_CHAVES dentroCorpo FECHA_CHAVES {
        $$ = criaNo("dentro das chaves");
        $$->pai = $2;
    }
    | error {}
;

dentroCorpo:
    declaracoes dentroCorpo {
        $$ = criaNo("declaracoes");
        $$->pai = $1;
        $$->filho = $2;
    }
    | declaracoes {
        $$ = $1;
    }
;

declaracoes:
    corpo {
        $$ = criaNo("declaracoes");
        $$->pai = $1;
    }
    | declaracaoVariavel {
        $$ = criaNo("declaracoes");
        $$->pai = $1;
    }
    | expressao {
        $$ = criaNo("declaracoes");
        $$->pai = $1;
    }
    | entrada {
        $$ = criaNo("declaracoes");
        $$->pai = $1;
    }
    | retorno {
        $$ = criaNo("declaracoes");
        $$->pai = $1;
    }
    | saida {
        $$ = criaNo("declaracoes");
        $$->pai = $1;
    }    
    | for {
        $$ = criaNo("declaracoes");
        $$->pai = $1;
    }
    | condicional {
        $$ = criaNo("declaracoes");
        $$->pai = $1;
    }
;

expressao:
    exp PONTOVIRGULA {
        $$ = criaNo("expressao");
        $$->pai = $1;
    }
    | expressaoList {
        $$ = criaNo("expressao");
        $$->pai = $1;
    }
    | ID ATRIBUICAO expressao {
        $$ = criaNo("ATRIBUICAO");
        $$->pai = $3;
    }
    | ID ATRIBUICAO nil {
        $$ = criaNo("NULO");
        $$->pai = $3;
    }
;


for:
    FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID FECHA_PARENTESES corpo {
        $$ = criaNo("for");
        $$->pai = $3;
        $3->filho = $4;
        $4->filho = $9;
    }
    | FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB ID FECHA_PARENTESES corpo {
        $$ = criaNo("for");
        $$->pai = $3;
        $3->filho = $4;
        $4->filho = $11;
    }
    | FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB numero FECHA_PARENTESES corpo {
        $$ = criaNo("for");
        $$->pai = $3;
        $3->filho = $4;
        $4->filho = $9;
        $9->filho = $11;
    }
    | FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO OP_LOGICA_NEG ID FECHA_PARENTESES corpo {
        $$ = criaNo("for");
        $$->pai = $3;
        $3->filho = $4;
        $4->filho = $10;
    }
;

condicional:
    IF ABRE_PARENTESES expressao FECHA_PARENTESES declaracoes {
        $$ = criaNo("IF");
        $$->pai = $3;
        $3->filho = $5;
    }
    | IF ABRE_PARENTESES exp FECHA_PARENTESES declaracoes ELSE declaracoes {
        $$ = criaNo("IF-ELSE");
        $$->pai = $3;
        $3->filho = $5;
        $5->filho = $7;
    }
;

exp:
    expressao_logica {
        $$ = criaNo("exp");
        $$->pai = $1;
    }
    | OP_LOGICA_NEG exp {
        $$ = criaNo("exp");
        $$->pai = $2;
    }
;

expressaoList:
    OP_LISTA ID PONTOVIRGULA {
        $$ = criaNo("expressaoList");
    }
    | exp CONSTRUTOR_LISTA ID PONTOVIRGULA {
        $$ = criaNo("expressaoList");
        $$->pai = $1;
    }
    | exp FUNCOES_LISTA ID PONTOVIRGULA {
        $$ = criaNo("expressaoList");
        $$->pai = $1;
    }
;

expressao_logica:
    expressao_logica OP_LOGICA_OR expressao_relacional {
        $$ = criaNo("expressaoLogica");
        $$->pai = $1;
        $1->filho = $3;
    }
    | expressao_logica OP_LOGICA_AND expressao_relacional {
        $$ = criaNo("expressaoLogica");
        $$->pai = $1;
        $1->filho = $3;
    }
    | expressao_relacional {
        $$ = criaNo("expressaoLogica");
    }
;

expressao_relacional:
    opSomaSub {
        $$ = criaNo("expressaoRelacional");
    }
    | expressao_relacional OP_B_RELACIONAIS opSomaSub {
        $$ = criaNo("expressaoRelacional");
        $$->pai = $1;
        $1->filho = $3;
    }
;

opSomaSub:
    opMultDiv {
         $$ = criaNo("Operando SomaSub");
    }
    | opSomaSub OP_B_SOMA_SUB opMultDiv {
        $$ = criaNo("Operando SomaSub");
        $$->pai = $1;
        $1->filho = $3;
    }
    
;

opMultDiv:
    argumento {
        $$ = criaNo("Operando MultDiv");
    }
    | opMultDiv OP_B_MULT_DIV argumento {
        $$ = criaNo("Operando MultDiv");
        $$->pai = $1;
        $1->filho = $3;
    }
;

argumento:
    ID {
        $$ = criaNo("ID");
    }
    | numero {
        $$ = criaNo("argumento");
        $$->pai = $1;
    }
    | ABRE_PARENTESES exp FECHA_PARENTESES {
        $$ = criaNo("argumento");
        $$->pai = $2;
    }
    | chamadaDeFuncao {
        $$ = criaNo("argumento");
        $$->pai = $1;
    }
;

chamadaDeFuncao:
    ID ABRE_PARENTESES exp FECHA_PARENTESES {
        $$ = criaNo("chamada de funcao");
        $$->pai = $3;
    }
;

entrada:
    ENTRADA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA {
        $$ = criaNo("entrada");
    }
;

saida:
    SAIDA ABRE_PARENTESES STRING FECHA_PARENTESES PONTOVIRGULA {
        $$ = criaNo("saida");
    }
    | SAIDA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA {
        $$ = criaNo("saida");
    }
    | SAIDA ABRE_PARENTESES expressao FECHA_PARENTESES PONTOVIRGULA {
        $$ = criaNo("saida");
        $$->pai = $3;
    }
    | SAIDA ABRE_PARENTESES FECHA_PARENTESES PONTOVIRGULA {
        $$ = criaNo("saida");
    }
    | SAIDA ABRE_PARENTESES OP_LISTA ID FECHA_PARENTESES PONTOVIRGULA {
        $$ = criaNo("saida");
    }
;

retorno:
    RETORNO exp PONTOVIRGULA {
        $$ = criaNo("retorno");
        $$->pai = $2;
    }
    | RETORNO PONTOVIRGULA {
        $$ = criaNo("retorno");
    }
;

nil:
    NIL PONTOVIRGULA {
        $$ = criaNo("NULO");
    }
    | OP_B_RELACIONAIS NIL {
        $$ = criaNo("NULO");
    }
;

numero:
    INT {
        $$ = criaNo("Numero");
    }
    | FLOAT {
        $$ = criaNo("Numero");
    }
;


%%

void yyerror(const char* s){
    fprintf(stderr, "%s\n", s);
}

int main(int argc, char ** argv) {
    yyin = fopen(argv[1], "r");
    
    yyparse();
    mostraAST(raiz, 0);
    liberaAST(raiz);
    fclose(yyin);
    yylex_destroy();
    printf("\n\n");
    return 0;
}