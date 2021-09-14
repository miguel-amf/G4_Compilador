#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/arvore.h"

AST* criaNo(char* nome_regra){
    AST* no = (AST*) malloc(sizeof(AST));

    no->pai = NULL;
    no->nome_regra = strdup(nome_regra);
    no->filho = NULL;

    return no;
}

void mostraAST(AST *ast, int altura) {
    if (ast == NULL)
        return;
    altura += 1;
    printf("\n");
      for (int i = 2; i < altura; i++)
          printf("---");
      printf("%s", ast->nome_regra);
    altura -= 1;
    mostraAST(ast->pai, altura+1);
    mostraAST(ast->filho, altura);
}

void liberaAST(AST* ast) {
  if(ast == NULL) {
    return;
  }
  
  liberaAST(ast->pai);
  liberaAST(ast->filho);

  if(ast->nome_regra != NULL){
    free(ast->nome_regra);
  }

  free(ast);

}