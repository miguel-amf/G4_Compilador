%option noyywrap
%option noinput nounput
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "sintatico.tab.h"
    #include "../lib/tabelaSimbolo.h"
    #include "../lib/arvore.h"

    int linha = 1, coluna = 1;
    int escopo = 0;
    int parametros = 0;
    int escopoL[1000];
    int escopoAtual = 0;
    extern TabelaSimbolo* id;
%}

COMENTARIO          "//".*|"/\*".*|"*/".*
ID                  [a-zA-Z_][a-zA-Z0-9_]*
INT                 ((\+|\-)?[1-9]+[0-9]*)|0
VOID                "void"
TIPO_INT            int
OP_B_SOMA_SUB       \+|\-
OP_B_MULT_DIV       "*"|"/"
OP_LOGICA_AND       "&&"
OP_LOGICA_NEG       "!"
OP_LOGICA_OR        "||"
OP_B_RELACIONAIS    "<"|"<="|">"|">="|"=="|"!="
IF                  if
ELSE                else
WHILE               while
RETORNO             return
ABRE_PARENTESES     "("
FECHA_PARENTESES    ")"
ABRE_CHAVES         "{"
FECHA_CHAVES        "}"
ATRIBUICAO          "="
VIRGULA             ","
PONTOVIRGULA        ";"
QUEBRALINHA         \n|\r
TABESPACO           [\t]+|[ ]+

%%
{COMENTARIO} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Comentario: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
}

{TIPO_INT} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Tipo: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return TIPO_INT;
}

{INT} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Inteiro: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return INT;
}

{VOID} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("VOID: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return VOID;
}

{OP_B_SOMA_SUB} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Operacao Binaria Aritmetica: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return OP_B_SOMA_SUB;
}

{OP_B_MULT_DIV} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Operacao Binaria Aritmetica: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return OP_B_MULT_DIV;
}

{OP_LOGICA_AND} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Operacao Logica Aritmetica: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return OP_LOGICA_AND;
}

{OP_LOGICA_NEG} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Operacao Logica Aritmetica: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return OP_LOGICA_NEG;
}

{OP_LOGICA_OR} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Operacao Logica Aritmetica: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return OP_LOGICA_OR;
}

{OP_B_RELACIONAIS} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Operacao Relacional: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return OP_B_RELACIONAIS;
}

{IF} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Comando de controle de fluxo: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return IF;
}

{ELSE} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Comando de controle de fluxo: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return ELSE;
}

{WHILE} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Comando de controle de fluxo: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return WHILE;
}

{RETORNO} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Comando de controle de fluxo: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return RETORNO;
}

{ID} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Identificador: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return ID;
}

{ATRIBUICAO} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Igual de atribuicao: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return ATRIBUICAO;
}

{VIRGULA} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Virgula: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return VIRGULA;
}

{PONTOVIRGULA} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Ponto e virgula: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return PONTOVIRGULA;
}

{ABRE_PARENTESES} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Parenteses: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    parametros++;
    return ABRE_PARENTESES;
}

{FECHA_PARENTESES} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Parenteses: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    parametros--;
    return FECHA_PARENTESES;
}

{ABRE_CHAVES} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Chaves: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    escopoL[++escopoAtual] = ++escopo;
    return ABRE_CHAVES;
}

{FECHA_CHAVES} {
    // printf("Linha: %d, Coluna: %d\t", linha, coluna);
    // printf("Chaves: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopoL[escopoAtual];
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    escopoAtual--;
    return FECHA_CHAVES;
}

{QUEBRALINHA} {
    linha += 1;
    coluna = 1;
}

{TABESPACO} {
    coluna += yyleng;
}

. {
    // printf("\nLinha: %d, Coluna: %d\t", linha, coluna);
    // printf("Erro no token %s\n\n", yytext);
    coluna += yyleng;
}

%%