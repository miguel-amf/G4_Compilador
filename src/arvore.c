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
      printf("%s %s", ast->nome_regra, ast->simbolo);
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