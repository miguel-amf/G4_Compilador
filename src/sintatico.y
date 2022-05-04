%define lr.type canonical-lr
%define parse.error verbose
%defines

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "../lib/cgen.h"
    #include "../lib/arvore.h"
    #include "../lib/tabelaSimbolo.h"
    extern int yylex();
    extern int yylex_destroy();
    extern void yyerror(const char* s);
    extern FILE *yyin;
    AST* raiz;
    TabelaSimbolo* id;
    int erros = 0;
    char tipos[4][10] = {"INT", "VOID"}; // TODO REVER ISSO POIS PODE SER REMOVIDO
    int tipo = 0;
    extern int escopoL[1000];
    extern int escopoAtual;
    extern int escopo;
    extern char type_symbol[20];
    int qtdString = 0;
    int qtdIf = 0;
    int funcao = 0;
    char nomeEscopo[30] = "global";
%}

// AST arvore de transcricao
%union{
    struct AST* ast;
    struct Token {
        int linha;
        int coluna;
        char id[100];
        int escopo;
        int valor;
        char escopo_f[30];
    } token;
}

%token <token>  ID
%token <token>  INT
%token <token>  VOID
%token <token>  TIPO_INT
%token <token>  OP_B_SOMA_SUB
%token <token>  OP_B_MULT_DIV
%token <token>  OP_LOGICA_AND
%token <token>  OP_LOGICA_NEG
%token <token>  OP_LOGICA_OR
%token <token>  OP_B_RELACIONAIS
%token <token> IF
%token <token> ELSE
%right THEN ELSE
%token <token>  WHILE
%token <token>  RETORNO
%token <token>  ABRE_PARENTESES
%token <token>  FECHA_PARENTESES
%token <token>  ABRE_CHAVES
%token <token>  FECHA_CHAVES
%token <token>  ATRIBUICAO
%token <token>  VIRGULA
%token <token>  PONTOVIRGULA


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
%type <ast> while;
%type <ast> condicional;
%type <ast> exp;
%type <ast> expressao_logica;
%type <ast> expressao_relacional;
%type <ast> opSomaSub;
%type <ast> opMultDiv;
%type <ast> argumento;
%type <ast> chamadaDeFuncao;
%type <ast> retorno;
%type <ast> numero;
%type <ast> expUnaria;



%%
programa:
    listaDeDeclaracoes {
        $$ = criaNo("programa");
        $$->proximo = $1;
        raiz = $$;
    }
;

listaDeDeclaracoes: 
    listaDeDeclaracoes declaracao {
        $$ = criaNo("lista De Declaracoes");
        $$->proximo = $1;
        $1->filho1 = $2;
    }
    | declaracao {
        $$ = $1;
    }
;

TIPO:
    TIPO_INT {
        $$ = criaNo("INT");
        strcpy($$->tipo, "INT");
        tipo = 0;
    }
    | VOID {
        $$ = criaNo("VOID");
        strcpy($$->tipo, "VOID");
        tipo = 1;
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
        $$->proximo = $1;
        id = insereSimbolo(id, $2.escopo, $2.id, "Variavel", $1->tipo, $2.linha, $2.coluna, 0);
        strcpy($1->simbolo, $2.id);
        tipo = 0;
        $$->tipoDeNo = Identificador;
    }
;

declaracaoFuncao:
    TIPO ID ABRE_PARENTESES listaDeParametros FECHA_PARENTESES corpo {
        $$ = criaNo("Declaracao de funcao");
        $$->proximo = $1;
        $1->filho1 = $4;
        $4->filho2 = $6;
        id = insereSimbolo(id, $2.escopo, $2.id, "Funcao", $1->tipo, $2.linha, $2.coluna, 0);
        // printf("\n---tipo = %s linha = %d --- %d\n", $1->tipo, $2.linha, tipo );
        strcpy($1->simbolo, $2.id);
        tipo = 0;
        strcpy(nomeEscopo, $2.id);
    }
;

listaDeParametros:
    TIPO ID VIRGULA listaDeParametros {
        $$ = criaNo("Lista de Parametros");
        $$->proximo = $1;
        $1->filho1 = $4;
        id = insereSimbolo(id, $2.escopo, $2.id, "Variavel", tipos[tipo], $2.linha, $2.coluna, 1);
        tipo = 0;
        strcpy($1->simbolo, $2.id);
    }
    | TIPO ID {
        $$ = criaNo("Lista de Parametros");
        $$->proximo = $1;
        escopoL[++escopoAtual] = escopo++;
        id = insereSimbolo(id, escopoL[escopoAtual], $2.id, "Variavel", tipos[tipo], $2.linha, $2.coluna, 1);
        strcpy($1->simbolo, $2.id);
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
        $$->proximo = $2;
    }
    | error {
        erros++;
    }
;

dentroCorpo:
    declaracoes dentroCorpo {
        $$ = criaNo("declaracoes");
        $$->proximo = $1;
        $$->filho1 = $2;
    }
    | declaracoes {
        $$ = criaNo("declaracoes");
        $$->proximo = $1;
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
    | retorno {
        $$ = $1;
    }
    | while {
        $$ = $1;
    }
    | condicional {
        $$ = $1;
    }
;

expressao:
    exp PONTOVIRGULA {
        $$ = criaNo("expressao");
        $$->proximo = $1;
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
    }
    | ID ATRIBUICAO expressao {
        $$ = criaNo("ATRIBUICAO");
        $$->proximo = $3;
        $$->tipoDeNo = Atribuicao;
        TabelaSimbolo* c = procuraVariavel(id, $1.id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", $1.linha, $1.coluna, $1.id);
        } else{
            strcpy($$->tipo, c->tipo);
            strcpy($$->simbolo, $1.id);
        }
    }
;


while:
    WHILE ABRE_PARENTESES exp FECHA_PARENTESES declaracoes {
        $$ = criaNo("while");
        $$->proximo = $3;
        $3->filho1 = $5;
        $$->tipoDeNo = Repeticao;
    }
;

condicional:
    IF ABRE_PARENTESES expressao FECHA_PARENTESES declaracoes %prec THEN {
        $$ = criaNo("IF");
        $$->proximo = $3;
        $3->filho1 = $5;
        $$->tipoDeNo = Condicao;
    }
    /* | IF ABRE_PARENTESES exp FECHA_PARENTESES declaracoes ELSE declaracoes {
        $$ = criaNo("IF-ELSE");
        $$->proximo = $3;
        $3->filho1 = $5;
        $5->filho2 = $7;
        $$->tipoDeNo = Condicao;
    } */
;

exp:
    expressao_logica {
        $$ = criaNo("exp");
        $$->proximo = $1;
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
        $$->tipoDeNo = Operacao;
    }
    | OP_LOGICA_NEG exp {
        $$ = criaNo("exp");
        $$->proximo = $2;
        strcpy($$->tipo, $2->tipo);
        strcpy($$->simbolo, $2->simbolo);
        $$->tipoDeNo = Operacao;
    }
;
expressao_logica:
    expressao_logica OP_LOGICA_OR expressao_relacional {
        $$ = criaNo("expressaoLogica");
        $$->proximo = $1;
        $1->filho1 = $3;
        //strcpy($$->tipo, "INT");
    }
    | expressao_logica OP_LOGICA_AND expressao_relacional {
        $$ = criaNo("expressaoLogica");
        $$->proximo = $1;
        $1->filho2 = $3;
        //strcpy($$->tipo, "INT");
    }
    | expressao_relacional {
        $$ = criaNo("expressaoLogica");
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
        $$ = $1;
        $$->tipoDeNo = Condicao;
    }
;

expressao_relacional:
    opSomaSub {
        $$ = criaNo("expressaoRelacional");
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
        $$ = $1;
        if (strcmp($1->simbolo, "+") != 0){
            $$->tipoDeNo = MAIS;
        }else  if (strcmp($1->simbolo, "-") != 0){
            $$->tipoDeNo = MENOS;
        }
    }
    | expressao_relacional OP_B_RELACIONAIS opSomaSub {
        $$ = criaNo("expressaoRelacional");
        $$->proximo = $1;
        $1->filho1 = $3;

        if (strcmp($1->simbolo, ">") != 0){
            $$->tipoDeNo = MAIOR;
        }else  if (strcmp($1->simbolo, "<") != 0){
            $$->tipoDeNo = MENOR;
        }else  if (strcmp($1->simbolo, "+") != 0){
            $$->tipoDeNo = MAIS;
        }else  if (strcmp($1->simbolo, "-") != 0){
            $$->tipoDeNo = MENOS;
        }else  if (strcmp($1->simbolo, "/") != 0){
            $$->tipoDeNo = DIVIDIDO;
        }else  if (strcmp($1->simbolo, "*") != 0){
            $$->tipoDeNo = MULTIPLICADO;
        }

        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
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
        $$->proximo = $1;
        $1->filho1 = $3;
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
        //sprintf($$->codeTac, "\tadd %s, %s", $1->simbolo, $3->simbolo);
    }    
;

opMultDiv:
   opMultDiv OP_B_MULT_DIV argumento {
        $$ = criaNo("Operando MultDiv");
        $$->proximo = $1;
        $1->filho1 = $3;
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
    }
    | expUnaria {
        $$ = $1;
    }
;

expUnaria:
    argumento {
        $$ = criaNo("expUnaria");
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
        $$->tipoDeNo = Constante;
    }
    | OP_B_SOMA_SUB argumento {
        $$ = criaNo("expUnaria");
        strcpy($$->tipo, $2->tipo);
        strcpy($$->simbolo, $2->simbolo);
        $$->tipoDeNo = Operacao;
    }

argumento:
    ID {
        if (!strcmp($1.id,"main")) {
            printf("\nERRO SEMANTICO: OPERACAO COM VOID = %s\n", $1.id);
        }
        $$ = criaNo("ID");
        TabelaSimbolo* c = procuraVariavel(id, $1.id);
        if(c == 0){
            printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel nao declarada!!!\n", $1.linha, $1.coluna, $1.id);
        }else{
            strcpy($$->tipo, c->tipo);
            strcpy($$->simbolo, $1.id);
            $$->tipoDeNo = Leitura;
        }
    }
    | numero {
        $$ = criaNo("numero_inteiro");
        $$->proximo = $1;
        strcpy($$->tipo, $1->tipo);
        strcpy($$->simbolo, $1->simbolo);
        $$->tipoDeNo = Constante;
    }
    | ABRE_PARENTESES exp FECHA_PARENTESES {
        $$ = criaNo("argumento");
        $$->proximo = $2;
        strcpy($$->tipo, $2->tipo);
        strcpy($$->simbolo, $2->simbolo);
    }
    | chamadaDeFuncao {
        $$ = criaNo("argumento");
        $$->proximo = $1;
        strcpy($$->tipo, $1->tipo);
    }
;

chamadaDeFuncao:
    ID ABRE_PARENTESES exp FECHA_PARENTESES {
        $$ = criaNo("chamada de funcao");
        $$->proximo = $3;
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


retorno:
    RETORNO exp PONTOVIRGULA {
        $$ = criaNo("retorno");
        $$->proximo = $2;
        char tipoRetornoC[20] = "";
        strcpy(tipoRetornoC, $2->tipo);
        $$->tipoDeNo = Atribuicao;
    }
    | RETORNO PONTOVIRGULA {
        $$ = criaNo("retorno");
        $$->tipoDeNo = Atribuicao;
    }
;


numero:
    INT {
        $$ = criaNo("Numero");
        strcpy($$->tipo, "INT");
        strcpy($$->simbolo, $1.id);
        $$->tipoDeNo = Leitura;
    }
;


%%

// IMPLEMENTAR VOID QUE DEU RUIM
void yyerror(const char* s){
    fprintf(stderr, "Linha: %d - Coluna: %d - Token: %s - Erro: %s\n", yylval.token.linha, yylval.token.coluna, yylval.token.id, s);
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
        gerarCodigo(raiz, parte);
    }
    limpaTabela(id);
    liberaAST();
    fclose(yyin);
    yylex_destroy();
    printf("\n\n");
    return 0;
}