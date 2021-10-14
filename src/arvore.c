#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/arvore.h"

int cont = 0;
AST* nos[9999];

AST* criaNo(char* nome_regra){
    AST* no = (AST*) malloc(sizeof(AST));

    no->pai = NULL;
    no->nome_regra = strdup(nome_regra);
    no->filho = NULL;
    strcpy(no->simbolo, "");
    strcpy(no->tipo,"");
    strcpy(no->cast,"");
    nos[cont] = no;
    cont++;

    return no;
}

void mostraAST(AST *ast, int altura) {
    if (ast == NULL){
        return;
    }
    altura += 1;
    printf("\n");
      for (int i = 2; i < altura; i++)
          printf("---");
      printf("%s", ast->nome_regra);
      if(strcmp(ast->nome_regra, "exp") == 0){
          printf(" ");
      }
      else if(strcmp(ast->simbolo, "") != 0){
          printf(" --> %s", ast->simbolo);
          if(strcmp(ast->tipo, "") != 0) printf(" --> Tipo: %s", ast->tipo);
          if(strcmp(ast->cast, "") != 0) printf(" --> Cast: %s", ast->cast);
      }
    altura -= 1;
    mostraAST(ast->pai, altura+1);
    mostraAST(ast->filho, altura);
}

void liberaAST() {
  int i;
  for(i = 0; i < cont; i++){
    AST* no = nos[i];
    if(no->nome_regra != NULL){
      free(no->nome_regra);
    }
    free(no);
  }
}

void castDeTudo(char* tipo, AST* esquerda, AST* direita) {
  if(strcmp(tipo, "INT") == 0 && strcmp(direita->tipo, "FLOAT") == 0) {
    strcpy(direita->tipo, "INT");
    strcpy(direita->cast, "float_para_int");
  } else if(strcmp(tipo, "FLOAT") == 0 && strcmp(direita->tipo, "INT") == 0){
    strcpy(direita->tipo, "FLOAT");
    strcpy(direita->cast, "int_para_float");
  } else if(strcmp(tipo, "INT LIST") == 0 && strcmp(direita->tipo, "NULO") == 0){
    strcpy(direita->tipo, "NULO");
    strcpy(direita->cast, "list_para_nil");
  } else if(strcmp(tipo, "Float LIST") == 0 && strcmp(direita->tipo, "NULO") == 0){
    strcpy(direita->tipo, "NULO");
    strcpy(direita->cast, "list_para_nil");
  } else if(strcmp(esquerda->tipo, "INT") == 0 && strcmp(direita->tipo, "FLOAT") == 0) {
    strcpy(esquerda->tipo, "FLOAT");
    strcpy(esquerda->cast, "float_para_int");
  } else if (strcmp(esquerda->tipo, "FLOAT") == 0 && strcmp(direita->tipo, "INT") == 0) {
    strcpy(direita->tipo, "FLOAT");
    strcpy(direita->cast, "int_para_float");
  } else if(strcmp(esquerda->tipo, "INT LIST") == 0 && strcmp(direita->tipo, "NULO") == 0) {
    strcpy(esquerda->tipo, "NULO");
    strcpy(esquerda->cast, "list_para_nil");
  } else if(strcmp(esquerda->tipo, "NULO") == 0 && strcmp(direita->tipo, "INT LIST") == 0) {
    strcpy(esquerda->tipo, "NULO");
    strcpy(esquerda->cast, "list_para_nil");
  } else if(strcmp(esquerda->tipo, "FLOAT LIST") == 0 && strcmp(direita->tipo, "NULO") == 0) {
    strcpy(esquerda->tipo, "NULO");
    strcpy(esquerda->cast, "list_para_nil");
  } else if(strcmp(esquerda->tipo, "NULO") == 0 && strcmp(direita->tipo, "FLOAT LIST") == 0) {
    strcpy(esquerda->tipo, "NULO");
    strcpy(esquerda->cast, "list_para_nil");
  }
}