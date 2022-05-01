#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* Yacc/Bison gera internamente seus proprios valores para os tokens, outros arquivos podem
acessar esses valores incluindo o arquivo tab.h gerado usando a opcao -d, gerando cabecalho.
O sinalizador YYPARSER impede a inclusao tab.h na propria saida do Yacc/Bison */

#ifndef YYPARSER

/* O nome desse arquivo pode mudar */
#include "y.tab.h"

/* ENDFILE e definido de forma implicita pelo Yacc/Bison e nao e incluido no arquivo tab.h */
#define ENDFILE 0

#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

/* Numero de palavras reservadas */
#define MAXRESERVED 8

/* Yacc/Bison gera seus proprios valores inteiros para fichas */

typedef int TokenType; 

extern FILE* source; /* arquivo de texto do codigo fonte */
extern FILE* listing; /* listando arquivo de texto de saida */
extern FILE* code; /* arquivo de texto de codigo para o simulador de TM */

extern int lineno; /* numero da linha de origem para listagem */


                     /*   Syntax tree for parsing */


typedef enum {StmtK, ExpK, DecK} NodeKind;
typedef enum {VarK, FunK, ParamK} DecKind;

typedef enum {CompK, IfK, WhileK, RetK} StmtKind;
typedef enum {OpK, ConstK, IdK, ArrIdK, CallK} ExpKind;

/* ExpType e usado para checar o tipo */
typedef enum {Void, Integer, Array} ExpType;

#define MAXCHILDREN 3

struct ScopeListRec;

typedef struct treeNode
   { struct treeNode * child[MAXCHILDREN];
     struct treeNode * sibling;
     int lineno;

     NodeKind nodekind;
     union {
        StmtKind stmt;
        ExpKind exp;
        DecKind dec;
    } kind;
    
     union {
        TokenType op;
        int val;
        char* name;
    } attr;
    int size;
    ExpType type; /* para checar o tipo */
    struct ScopeListRec *scope;

   } TreeNode;


                              /*   Flags para rastreio      */


/* faz com que o programa fonte seja ecoado no arquivo de listagem com numeros de linha durante a analise */
extern int EchoSource;

/* faz com que as informacoes do token sejam impressas no arquivo de listagem
a medida que cada token e reconhecido pelo scanner */
extern int TraceScan;

/* Faz com que a arvore de sintaxe seja impressa no arquivo de listagem de forma linearizada usando recuos para filhos */
extern int TraceParse;

/* Faz com que as insercoes e pesquisas da tabela de simbolos sejam relatadas ao arquivo de listagem */
extern int TraceAnalyze;

/* Faz com que os comentarios sejam gravados no arquivo de codigo TM a medida que o codigo e gerado */
extern int TraceCode;

/* Impede novas passagens se ocorrer um erro */
extern int Error; 
#endif
