%define lr.type canonical-lr
%define parse.error verbose
%defines

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "../lib/arvore.h"
    #include "../lib/tabelaSimbolo.h"
    extern int yylex();
    extern int yylex_destroy();
    extern void yyerror(const char* s);
    extern FILE *yyin;
    AST* raiz;
    TabelaSimbolo* id;
    int erros = 0;
    char tipos[4][10] = {"INT", "FLOAT", "INT LIST", "FLOAT LIST"};
    char tiposTac[4][10] = {"int", "float", "int list", "float list"};
    int tipo = 0;
    extern int escopoL[1000];
    extern int escopoAtual;
    extern int escopo;
    extern char type_symbol[20];
    int qtdString = 0;
    int qtdIf = 0;
    int funcao = 0;
%}

%union{
    struct AST* ast;
    struct Token {
        int linha;
        int coluna;
        char id[100];
        int escopo;
    } token;
}

%token <token>  ID
%token <token>  INT
%token <token>  FLOAT
%token <token>  TIPO_INT
%token <token>  TIPO_FLOAT
%token <token>  TIPO_LIST_INT
%token <token>  TIPO_LIST_FLOAT
%token <token>  OP_B_SOMA_SUB
%token <token>  OP_B_MULT_DIV
%token <token>  OP_LOGICA_AND
%token <token>  OP_LOGICA_NEG
%token <token>  OP_LOGICA_OR
%token <token>  OP_B_RELACIONAIS
%token <token> IF
%token <token> ELSE
%right THEN ELSE
%token <token>  FOR
%token <token>  RETORNO
%token <token>  ENTRADA
%token <token>  SAIDA
%token <token>  CONSTRUTOR_LISTA
%token <token>  OP_LISTA
%token <token>  FUNCOES_LISTA
%token <token>  STRING
%token <token>  NIL
%token <token>  ABRE_PARENTESES
%token <token>  FECHA_PARENTESES
%token <token>  ABRE_CHAVES
%token <token>  FECHA_CHAVES
%token <token>  ATRIBUICAO
%token <token>  VIRGULA
%token <token>  PONTOVIRGULA
%token <token>  COLCHETES

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
%type <ast> expressao_unaria;


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
        strcpy($$->tipo, "INT");
        tipo += 0;
    }
    | TIPO_FLOAT {
        $$ = criaNo("FLOAT");
        strcpy($$->tipo, "FLOAT");
        tipo += 1;
    }
    | TIPO_LIST_INT {
        $$ = criaNo("INT LIST");
        strcpy($$->tipo, "INT LIST");
        tipo += 2;
    }
    | TIPO_LIST_FLOAT {
        $$ = criaNo("FLOAT LIST");
        strcpy($$->tipo, "FLOAT LIST");
        tipo += 3;
    }
;

declaracao:
    declaracaoVariavel {
        $$ = $1;
    }
    | declaracaoFuncao {
        $$ = $1;
    }
    | error {
        erros++;
    }
;

declaracaoVariavel: 
    TIPO ID PONTOVIRGULA {
        $$ = criaNo("Declaracao de Variavel");
        $$->pai = $1;
        id = insereSimbolo(id, $2.escopo, $2.id, "Variavel", tipos[tipo], $2.linha, $2.coluna, 0);
        strcpy($1->simbolo, $2.id);
        sprintf($$->tableTac, "\t%s %s%d", tiposTac[tipo], $2.id, $2.escopo);
        tipo = 0;
    }
;

declaracaoFuncao:
    TIPO ID ABRE_PARENTESES listaDeParametros FECHA_PARENTESES corpo {
        $$ = criaNo("Declaracao de funcao");
        $$->pai = $1;
        $1->filho = $4;
        $4->filho = $6;
        id = insereSimbolo(id, $2.escopo, $2.id, "Funcao", tipos[tipo], $2.linha, $2.coluna, 0);
        strcpy($1->simbolo, $2.id);
        tipo = 0;
    }
;

listaDeParametros:
    TIPO ID VIRGULA listaDeParametros {
        $$ = criaNo("Lista de Parametros");
        $$->pai = $1;
        $1->filho = $4;
        id = insereSimbolo(id, $2.escopo, $2.id, "Variavel", tipos[tipo], $2.linha, $2.coluna, 1);
        sprintf($$->tableTac,"\t%s %s%d", tiposTac[tipo], $2.id, $2.escopo+1);
        tipo = 0;
        strcpy($1->simbolo, $2.id);
    }
    | TIPO ID {
        $$ = criaNo("Lista de Parametros");
        $$->pai = $1;
        escopoL[++escopoAtual] = escopo++;
        id = insereSimbolo(id, escopoL[escopoAtual], $2.id, "Variavel", tipos[tipo], $2.linha, $2.coluna, 1);
        strcpy($1->simbolo, $2.id);
        sprintf($$->tableTac,"\t%s %s%d", tiposTac[tipo], $2.id, escopoL[escopoAtual]+1);
        tipo = 0;
        escopoAtual--;
        escopo--;
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
    | error {
        erros++;
    }
;

dentroCorpo:
    declaracoes dentroCorpo {
        $$ = criaNo("declaracoes");
        $$->pai = $1;
        $$->filho = $2;
    }
    | declaracoes {
        $$ = criaNo("declaracoes");
        $$->pai = $1;
    }
;

declaracoes:
    corpo {
        $$ = $1;
    }
    | declaracaoVariavel {
        $$ = $1;
    }
    | expressao {
        $$ = $1;
    }
    | entrada {
        $$ = $1;
    }
    | retorno {
        $$ = $1;
    }
    | saida {
        $$ = $1;
    }    
    | for {
        $$ = $1;
    }
    | condicional {
        $$ = $1;
    }
;

expressao:
    exp PONTOVIRGULA {
        $$ = criaNo("expressao");
        $$->pai = $1;
        strcpy($$->tipo, $1->tipo);
        castDeTudo($$->tipo, $$, $1);
        strcpy($$->simbolo, $1->simbolo);
    }
    | expressaoList {
        $$ = criaNo("expressao");
        $$->pai = $1;
        strcpy($$->tipo, $1->tipo);
    }
    | ID ATRIBUICAO expressao {
        $$ = criaNo("ATRIBUICAO");
        $$->pai = $3;
        TabelaSimbolo* c = procuraVariavel(id, $1.id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", $1.linha, $1.coluna, $1.id);
        } else{
            strcpy($$->tipo, c->tipo);
            castDeTudo($$->tipo, $$, $3);
            strcpy($$->simbolo, $1.id);
        }
    }
    | ID ATRIBUICAO nil {
        $$ = criaNo("NULO");
        $$->pai = $3;
        TabelaSimbolo* c = procuraVariavel(id, $1.id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", $1.linha, $1.coluna, $1.id);
        } else{
            strcpy($$->tipo, c->tipo);
            castDeTudo($$->tipo, $$, $3);
        }
    }
;


for:
    FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID FECHA_PARENTESES declaracoes {
        $$ = criaNo("for");
        $$->pai = $3;
        $3->filho = $4;
        $4->filho = $9;
    }
    | FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB ID FECHA_PARENTESES declaracoes {
        $$ = criaNo("for");
        $$->pai = $3;
        $3->filho = $4;
        $4->filho = $11;
    }
    | FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO ID OP_B_SOMA_SUB numero FECHA_PARENTESES declaracoes {
        $$ = criaNo("for");
        $$->pai = $3;
        $3->filho = $4;
        $4->filho = $9;
        $9->filho = $11;
    }
    | FOR ABRE_PARENTESES expressao expressao ID ATRIBUICAO OP_LOGICA_NEG ID FECHA_PARENTESES declaracoes {
        $$ = criaNo("for");
        $$->pai = $3;
        $3->filho = $4;
        $4->filho = $10;
    }
;

condicional:
    IF ABRE_PARENTESES exp FECHA_PARENTESES declaracoes %prec THEN {
        $$ = criaNo("IF");
        $$->pai = $3;
        $3->filho = $5;

        // sprintf($$->codeTac, "saidaIf%d:\n", qtdIf);
        // sprintf($$->codeTac, "\tbrz ");
        // qtdIf++;
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
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
    }
    | OP_LOGICA_NEG exp {
        $$ = criaNo("exp");
        $$->pai = $2;
        strcpy($$->tipo, $2->tipo);
        strcpy($$->simbolo, $2->simbolo);
    }
;

expressaoList:
    OP_LISTA ID PONTOVIRGULA {
        $$ = criaNo("expressaoList");
        strcpy($$->tipo, "OPERACAOLISTA");
    }
    | exp CONSTRUTOR_LISTA ID PONTOVIRGULA {
        $$ = criaNo("expressaoList");
        $$->pai = $1;
        strcpy($$->tipo, "CONSTRUTORLISTA");
    }
    | exp FUNCOES_LISTA ID PONTOVIRGULA {
        $$ = criaNo("expressaoList");
        $$->pai = $1;
        strcpy($$->tipo, "FUNCAOLISTA");
    }
;

expressao_logica:
    expressao_logica OP_LOGICA_OR expressao_relacional {
        $$ = criaNo("expressaoLogica");
        $$->pai = $1;
        $1->filho = $3;
        //strcpy($$->tipo, "INT");
        castDeTudo($$->tipo, $$, $3);        
    }
    | expressao_logica OP_LOGICA_AND expressao_relacional {
        $$ = criaNo("expressaoLogica");
        $$->pai = $1;
        $1->filho = $3;
        //strcpy($$->tipo, "INT");
        castDeTudo($$->tipo, $$, $3);
    }
    | expressao_relacional {
        $$ = criaNo("expressaoLogica");
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
        $$ = $1;
    }
;

expressao_relacional:
    opSomaSub {
        $$ = criaNo("expressaoRelacional");
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
        $$ = $1;
    }
    | expressao_relacional OP_B_RELACIONAIS opSomaSub {
        $$ = criaNo("expressaoRelacional");
        $$->pai = $1;
        $1->filho = $3;
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
        castDeTudo($$->tipo, $$, $3);
    }
;

opSomaSub:
    opMultDiv {
        $$ = criaNo("Operando SomaSub");
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
        $$ = $1;
    }
    | opSomaSub OP_B_SOMA_SUB opMultDiv {
        $$ = criaNo("Operando SomaSub");
        $$->pai = $1;
        $1->filho = $3;
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
        castDeTudo($$->tipo, $$, $3);
        sprintf($$->codeTac, "\tadd %s, %s", $1->simbolo, $3->simbolo);
    }
    | opSomaSub OP_B_SOMA_SUB OP_LISTA opMultDiv {
        $$ = criaNo("Operando SomaSub");
        $$->pai = $1;
        $1->filho = $4;
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
        castDeTudo($$->tipo, $$, $4);
    }
    
;

opMultDiv:
   opMultDiv OP_B_MULT_DIV argumento {
        $$ = criaNo("Operando MultDiv");
        $$->pai = $1;
        $1->filho = $3;
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
        castDeTudo($$->tipo, $$, $3);
    }
    | expressao_unaria {
        $$ = $1;
    }
;

expressao_unaria:
    argumento {
        $$ = criaNo("expressao_unaria");
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
    }
    | OP_B_SOMA_SUB argumento {
        $$ = criaNo("expressao_unaria");
        strcpy($$->tipo, $2->tipo);
        strcpy($$->simbolo, $2->simbolo);
    }

argumento:
    ID {
        $$ = criaNo("ID");
        TabelaSimbolo* c = procuraVariavel(id, $1.id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", $1.linha, $1.coluna, $1.id);
        }else{
            strcpy($$->tipo, c->tipo);
            strcpy($$->simbolo, $1.id);
        }
    }
    | numero {
        $$ = criaNo("argumento");
        $$->pai = $1;
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
    }
    | ABRE_PARENTESES exp FECHA_PARENTESES {
        $$ = criaNo("argumento");
        $$->pai = $2;
        strcpy($$->tipo, $2->tipo);
        strcpy($$->simbolo, $2->simbolo);
    }
    | chamadaDeFuncao {
        $$ = criaNo("argumento");
        $$->pai = $1;
        strcpy($$->tipo, $1->tipo);
    }
;

chamadaDeFuncao:
    ID ABRE_PARENTESES exp FECHA_PARENTESES {
        $$ = criaNo("chamada de funcao");
        $$->pai = $3;
        TabelaSimbolo* c = procuraVariavel(id, $1.id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Funcao nao declarada!!!\n", $1.linha, $1.coluna, $1.id);
        }else{
            strcpy($$->tipo, c->tipo);
        }
    }
    | ID ABRE_PARENTESES FECHA_PARENTESES {
        $$ = criaNo("chamada de funcao");
        TabelaSimbolo* c = procuraVariavel(id, $1.id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Funcao nao declarada!!!\n", $1.linha, $1.coluna, $1.id);
        }else{
            strcpy($$->tipo, c->tipo);
        }
    }
;

entrada:
    ENTRADA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA {
        $$ = criaNo("entrada");
        TabelaSimbolo* c = procuraVariavel(id, $3.id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", $3.linha, $3.coluna, $3.id);
        }else{
            strcpy($$->tipo, c->tipo);
            if(strcmp($$->tipo, "FLOAT") == 0){
                sprintf($$->codeTac,"\tscanf %s%d",$3.id, $3.escopo);
            }
            if(strcmp($$->tipo, "INT") == 0){
                sprintf($$->codeTac,"\tscani %s%d",$3.id, $3.escopo);
            }
        }
    }
;

saida:
    SAIDA ABRE_PARENTESES STRING FECHA_PARENTESES PONTOVIRGULA {
        $$ = criaNo("saida");
        strcpy($$->simbolo, $3.id);
        sprintf($$->tableTac, "\tchar string%d[] = %s", qtdString, $3.id);
        if(strcmp($1.id, "writeln") == 0){
            int tamanho = (int)strlen($3.id) - 2;
            sprintf($$->codeTac, "\tstring%d", qtdString);
            sprintf($$->codeTac, "\tmov $400, &string%d\n\tparam %d\n\tparam $400\n\tcall writeln_fn, 2", qtdString, tamanho);
        }
        if(strcmp($1.id, "write") == 0){
            int tamanho = (int)strlen($3.id) - 2;
            sprintf($$->codeTac, "\tstring%d", qtdString);
            sprintf($$->codeTac, "\tmov $400, &string%d\n\tparam %d\n\tparam $400\n\tcall write_fn, 2", qtdString, tamanho);
        }
        qtdString++;

    }
    | SAIDA ABRE_PARENTESES ID FECHA_PARENTESES PONTOVIRGULA {
        $$ = criaNo("saida");
        TabelaSimbolo* c = procuraVariavel(id, $3.id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", $3.linha, $3.coluna, $3.id);
        }
    }
    | SAIDA ABRE_PARENTESES expressao FECHA_PARENTESES PONTOVIRGULA {
        $$ = criaNo("saida");
        $$->pai = $3;
    }
    | SAIDA ABRE_PARENTESES OP_LISTA ID FECHA_PARENTESES PONTOVIRGULA {
        $$ = criaNo("saida");
    }
;

retorno:
    RETORNO exp PONTOVIRGULA {
        $$ = criaNo("retorno");
        $$->pai = $2;
        char tipoRetornoC[20] = "";
        strcpy(tipoRetornoC, $2->tipo);
    }
    | RETORNO PONTOVIRGULA {
        $$ = criaNo("retorno");
    }
;

nil:
    NIL PONTOVIRGULA {
        $$ = criaNo("NULO");
        strcpy($$->tipo, "NULO");
        strcpy($$->simbolo, $1.id);
    }
    | OP_B_RELACIONAIS NIL {
        $$ = criaNo("NULO");
        strcpy($$->tipo, "NULO");
        strcpy($$->simbolo, $2.id);
    }
;

numero:
    INT {
        $$ = criaNo("Numero");
        strcpy($$->tipo, "INT");
        strcpy($$->simbolo, $1.id);
    }
    | FLOAT {
        $$ = criaNo("Numero");
        strcpy($$->tipo, "FLOAT");
        strcpy($$->simbolo, $1.id);
    }
;


%%

void yyerror(const char* s){
    fprintf(stderr, "Linha: %d - Coluna: %d - Token: %s - Erro: %s\n", yylval.token.linha, yylval.token.coluna, yylval.token.id, s);
}

const char* saida = 
    "write_fn:\n"
    "\tmov $500, 0\n"
    "proximo:\n"
    "\tmov $499, #1\n"
    "\tmov $499, $499[$500]\n"
    "\tadd $500, $500, 1\n"
    "\tprint $499\n"
    "\tsub $499, $500, #0\n"
    "\tbrnz proximo, $499\n"
    "\treturn\n"
    "writeln_fn:\n"
    "\tcall write_fn, 2\n"
    "\tprintln\n"
    "\treturn\n";

void tabelaTac(AST* ast, FILE *fp){
    if (ast == NULL){
        return;
    }
    if(strcmp(ast->tableTac, "")){
        fprintf (fp, "%s\n", ast->tableTac);
    }
    tabelaTac(ast->pai, fp);
    tabelaTac(ast->filho, fp);
}

void codigoTac(AST* ast, FILE *fp){
    if (ast == NULL){
        return;
    }
    if(strcmp(ast->nome_regra, "Declaracao de funcao") == 0){
        if(funcao == 1) fprintf (fp, "\treturn 0\n");
        funcao = 1;
        fprintf (fp, "\n%s:\n", ast->pai->simbolo);
    }
    codigoTac(ast->pai, fp);
    codigoTac(ast->filho, fp);
    if(strcmp(ast->codeTac, "")){
        fprintf (fp, "%s\n", ast->codeTac);
    }
}

void geraArquivoTac(AST* raiz, char* nomeArquivo){
    char arquivo[200] = "";
    sprintf(arquivo, "%s.tac", nomeArquivo);
    FILE *fp = fopen(arquivo, "w+");
    if(fp){
        fprintf (fp, ".table\n");
        tabelaTac(raiz, fp);
        fprintf (fp, "\n.code\n");
        fprintf(fp, "\n%s\n", saida);
        codigoTac(raiz, fp);
    }
    else{
        printf("Error, could not write TAC file.\n");
    }
    fclose(fp);
}


int main(int argc, char ** argv) {
    int posicao = 6;
    int final = (int)strlen(argv[1]) - posicao;
    char parte[10000];
    memcpy(parte, &argv[1][posicao], final-2);
    yyin = fopen(argv[1], "r");
    
    yyparse();

    if(procuraMain(id) == 0){
        printf("Erro Semantico - Funcao Main nao encontrada!!!\n");
    }

    if(erros == 0){
        mostraAST(raiz, 0);
    }
    mostraTabela(id);
    if(erros == 0){
        geraArquivoTac(raiz, parte);
    }
    limpaTabela(id);
    liberaAST();
    fclose(yyin);
    yylex_destroy();
    printf("\n\n");
    return 0;
}