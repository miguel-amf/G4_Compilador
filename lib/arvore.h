#ifndef ARVORE_SINTATICA_ABSTRATA_H
#define ARVORE_SINTATICA_ABSTRATA_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

extern FILE* source; /* source code text file */
extern FILE* listing; /* listing output text file */
extern FILE* code; /* code text file for TM simulator */

typedef enum {Condicao,Repeticao,Atribuicao,Leitura,Operacao,Constante,Identificador} TipoDeNo;
typedef enum {MAIOR, MENOR, MAIS, MENOS, DIVIDIDO, MULTIPLICADO} TipoDeToken;

typedef struct AST{
    char* nome_regra; //nome
    struct AST* proximo;
    struct AST* filho1;
    struct AST* filho2;
    struct AST* filho3;
    char tipo[20];
    char simbolo[100];
    int valor;
    int funcao; //verifica se é funcao
    TipoDeToken tipoToken; // operador ou valor ou nome
    TipoDeNo tipoDeNo; //determina o tipo possivel de nó Kind
} AST;

AST* criaNo(char* nome_regra);
void mostraAST(AST *ast, int altura);
void liberaAST();

#endif