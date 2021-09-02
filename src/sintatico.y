%define lr.type canonical-lr
%define parse.error verbose


%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    extern int yylex();
    extern int yylex_destroy();
    extern void yyerror(const char* s);
    extern FILE *yyin;
%}

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

%%
programa:
    listaDeDeclaracoes {
        
    }
;

listaDeDeclaracoes: 
    listaDeDeclaracoes declaracao {
        
    }
    | declaracao {
        
    }
;

TIPO:
    TIPO_INT {
        
    }
    | TIPO_FLOAT {
        
    }
    | TIPO_LIST_INT {
        
    }
    | TIPO_LIST_FLOAT {
        
    }
;

declaracao:
    declaracaoVariavel {
        
    }
    | declaracaoFuncao {
        
    }
;

declaracaoVariavel: 
    TIPO ID PONTOVIRGULA {
        
    }
;

declaracaoFuncao:
    TIPO ID ABRE_PARENTESES listaDeParametros FECHA_PARENTESES corpo {
        
    }
;

listaDeParametros:
    TIPO ID VIRGULA listaDeParametros {
        
    }
    | TIPO ID {
        
    }
    | {}
;

corpo:
    ABRE_CHAVES dentroCorpo FECHA_CHAVES {
        
    }
;

dentroCorpo:
    declaracoes dentroCorpo {
      
    }
    | declaracoes {
        
    }
;

declaracoes:
    corpo {
        
    }
    | declaracaoVariavel {
        
    }
    | expressao {
        
    }
    | entrada {
        
    }
    | retorno {
        
    }
    | saida {

    }    
    | for {
    
    }
    | condicional {

    }
;

expressao:
    exp PONTOVIRGULA {

    }
    | ID ATRIBUICAO nil {
        
    }
    | expressaoList {

    }
;

//TODO ARRUMAR PQ TA BUGADASSO
for:
    FOR ABRE_PARENTESES expressao exp PONTOVIRGULA expressao FECHA_PARENTESES corpo {
    }
;

condicional:
    IF ABRE_PARENTESES expressao FECHA_PARENTESES declaracoes {
        
    }
    | IF ABRE_PARENTESES exp FECHA_PARENTESES declaracoes ELSE declaracoes {
        
    }

;

exp:
    expressao_logica {

    }
    | ID ATRIBUICAO exp {

    }
    | OP_LOGICA_NEG exp {

    }
;

expressaoList:
    OP_LISTA ID PONTOVIRGULA {

    }
    | exp CONSTRUTOR_LISTA ID PONTOVIRGULA {

    }
    | exp FUNCOES_LISTA ID PONTOVIRGULA {

    }
;

expressao_logica:
    expressao_logica OP_LOGICA_OR expressao_relacional {

    }
    | expressao_logica OP_LOGICA_AND expressao_relacional {

    }
    | expressao_relacional {

    }
;

expressao_relacional:
    opSomaSub {

    }
    | expressao_relacional OP_B_RELACIONAIS opSomaSub {

    }
;

opSomaSub:
    opMultDiv {

    }
    | opSomaSub OP_B_SOMA_SUB opMultDiv {

    }
    
;

opMultDiv:
    argumento {

    }
    | opMultDiv OP_B_MULT_DIV argumento {

    }
;

argumento:
    ID {

    }
    | numero {

    }
    | ABRE_PARENTESES exp FECHA_PARENTESES {

    }
    | chamadaDeFuncao {

    }
;

chamadaDeFuncao:
    ID ABRE_PARENTESES exp FECHA_PARENTESES {

    }
;

entrada:
    ENTRADA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA {
        
    }
;

saida:
    SAIDA ABRE_PARENTESES STRING FECHA_PARENTESES PONTOVIRGULA {

    }
    | SAIDA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA {

    }
    | SAIDA ABRE_PARENTESES expressao FECHA_PARENTESES PONTOVIRGULA {

    }
    | SAIDA ABRE_PARENTESES FECHA_PARENTESES PONTOVIRGULA {

    }
    | SAIDA ABRE_PARENTESES OP_LISTA ID FECHA_PARENTESES PONTOVIRGULA {

    }
;

retorno:
    RETORNO exp PONTOVIRGULA;
    | RETORNO PONTOVIRGULA;
;

nil:
    NIL PONTOVIRGULA {
        
    }
    | OP_B_RELACIONAIS NIL {

    }
;

numero:
    INT {

    }
    | FLOAT {

    }
;


%%

void yyerror(const char* s){
    fprintf(stderr, "%s\n", s);
}

int main(int argc, char ** argv) {
    yyin = fopen(argv[1], "r");
    
    yyparse();

    fclose(yyin);
    yylex_destroy();
    printf("\n\n");
    return 0;
}