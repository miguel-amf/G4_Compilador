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

    extern TabelaSimbolo* id;
%}

COMENTARIO          "//".*|"/\*".*|"*/".*
ID                  [a-zA-Z_][_a-z0-9A-Z]*
INT                 "-"?[0-9]+
FLOAT               "-"?[0-9]+"."[0-9]+
TIPO_INT            int
TIPO_FLOAT          float
TIPO_LIST_INT       "int list"
TIPO_LIST_FLOAT     "float list"
OP_B_SOMA_SUB       "+"|"-"
OP_B_MULT_DIV       "*"|"/"
OP_LOGICA_AND       "&&"
OP_LOGICA_NEG       "!"
OP_LOGICA_OR        "||"
OP_B_RELACIONAIS    "<"|"<="|">"|">="|"=="|"!="
IF                  if
ELSE                else
FOR                 for
RETORNO             return
ENTRADA             read
SAIDA               write|writeln
CONSTRUTOR_LISTA    ":"
OP_LISTA            "?"|"%"
FUNCOES_LISTA       ">>"|"<<"
STRING              \"[^\"]*\"|'[^']*'
NIL                 NIL
ABRE_PARENTESES     "("
FECHA_PARENTESES    ")"
ABRE_CHAVES         "{"
FECHA_CHAVES        "}"
ATRIBUICAO          "="
VIRGULA             ","
PONTOVIRGULA        ";"
COLCHETES           "["|"]"
QUEBRALINHA         \n|\r
TABESPACO           [\t]+|[ ]+

%%
{COMENTARIO} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Comentario: %s\n", yytext);
    coluna += yyleng;
}

{TIPO_INT} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Tipo: %s\n", yytext);
    coluna += yyleng;
    return TIPO_INT;
}

{TIPO_FLOAT} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Tipo: %s\n", yytext);
    coluna += yyleng;
    return TIPO_FLOAT;
}

{TIPO_LIST_INT} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Tipo: %s\n", yytext);
    coluna += yyleng;
    return TIPO_LIST_INT;
}

{TIPO_LIST_FLOAT} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Tipo: %s\n", yytext);
    coluna += yyleng;
    return TIPO_LIST_FLOAT;
}

{INT} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Inteiro: %s\n", yytext);
    coluna += yyleng;
    return INT;
}

{FLOAT} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Float: %s\n", yytext);
    coluna += yyleng;
    return FLOAT;
}

{OP_B_SOMA_SUB} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Operacao Binaria Aritmetica: %s\n", yytext);
    coluna += yyleng;
    return OP_B_SOMA_SUB;
}

{OP_B_MULT_DIV} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Operacao Binaria Aritmetica: %s\n", yytext);
    coluna += yyleng;
    return OP_B_MULT_DIV;
}

{OP_LOGICA_AND} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Operacao Logica Aritmetica: %s\n", yytext);
    coluna += yyleng;
    return OP_LOGICA_AND;
}

{OP_LOGICA_NEG} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Operacao Logica Aritmetica: %s\n", yytext);
    coluna += yyleng;
    return OP_LOGICA_NEG;
}

{OP_LOGICA_OR} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Operacao Logica Aritmetica: %s\n", yytext);
    coluna += yyleng;
    return OP_LOGICA_OR;
}

{OP_B_RELACIONAIS} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Operacao Relacional: %s\n", yytext);
    coluna += yyleng;
    return OP_B_RELACIONAIS;
}

{IF} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Comando de controle de fluxo: %s\n", yytext);
    coluna += yyleng;
    return IF;
}

{ELSE} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Comando de controle de fluxo: %s\n", yytext);
    coluna += yyleng;
    return ELSE;
}

{FOR} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Comando de controle de fluxo: %s\n", yytext);
    coluna += yyleng;
    return FOR;
}

{RETORNO} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Comando de controle de fluxo: %s\n", yytext);
    coluna += yyleng;
    return RETORNO;
}

{ENTRADA} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Entrada(READ): %s\n", yytext);
    coluna += yyleng;
    return ENTRADA;
}

{SAIDA} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Saida(WRITE ou WRITELN): %s\n", yytext);
    coluna += yyleng;
    return SAIDA;
}

{CONSTRUTOR_LISTA} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Construtor da Lista: %s\n", yytext);
    coluna += yyleng;
    return CONSTRUTOR_LISTA;
}

{OP_LISTA} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Operacao da Lista: %s\n", yytext);
    coluna += yyleng;
    return OP_LISTA;
}

{FUNCOES_LISTA} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Funcao da Lista: %s\n", yytext);
    coluna += yyleng;
    return FUNCOES_LISTA;
}

{NIL} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Constante NIL: %s\n", yytext);
    coluna += yyleng;
    return NIL;
}

{STRING} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("String: %s\n", yytext);
    coluna += yyleng;
    return STRING;
}

{ID} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Identificador: %s\n", yytext);
    yylval.token.linha = linha;
    yylval.token.coluna = coluna;
    yylval.token.escopo = escopo;
    strcpy(yylval.token.id, yytext);
    coluna += yyleng;
    return ID;
}

{ATRIBUICAO} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Igual de atribuicao: %s\n", yytext);
    coluna += yyleng;
    return ATRIBUICAO;
}

{VIRGULA} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Virgula: %s\n", yytext);
    coluna += yyleng;
    return VIRGULA;
}

{PONTOVIRGULA} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Ponto e virgula: %s\n", yytext);
    coluna += yyleng;
    return PONTOVIRGULA;
}

{ABRE_PARENTESES} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Parenteses: %s\n", yytext);
    coluna += yyleng;
    parametros++;
    return ABRE_PARENTESES;
}

{FECHA_PARENTESES} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Parenteses: %s\n", yytext);
    coluna += yyleng;
    parametros--;
    return FECHA_PARENTESES;
}

{ABRE_CHAVES} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Chaves: %s\n", yytext);
    coluna += yyleng;
    escopo++;
    return ABRE_CHAVES;
}

{FECHA_CHAVES} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Chaves: %s\n", yytext);
    coluna += yyleng;
    escopo--;
    return FECHA_CHAVES;
}



{COLCHETES} {
    printf("Linha: %d, Coluna: %d\t", linha, coluna);
    printf("Chaves: %s\n", yytext);
    coluna += yyleng;
    return COLCHETES;
}

{QUEBRALINHA} {
    linha += 1;
    coluna = 1;
}

{TABESPACO} {
    coluna += yyleng;
}

. {
    printf("\nLinha: %d, Coluna: %d\t", linha, coluna);
    printf("Erro no token %s\n\n", yytext);
    coluna += yyleng;
}

%%