#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/arvore.h"

int cont = 0;
AST* nos[9999];

AST* criaNo(char* nome_regra){
    AST* no = (AST*) malloc(sizeof(AST));
    //*no->filho = (AST*) malloc(3 * sizeof(AST));
    no->proximo = NULL;
    no->filho1 = NULL;
    no->filho2 = NULL;
    no->filho3 = NULL;
    no->nome_regra = strdup(nome_regra);
    no->funcao=0;
    // for (int i=0; i< 3; i++) no->filho = (AST*) malloc(3 * sizeof(AST));
    strcpy(no->simbolo, "");
    strcpy(no->tipo,"");
    // strcpy(no->cast,"");
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
      }
    altura -= 1;
    mostraAST(ast->proximo, altura+1);
    mostraAST(ast->filho1, altura);
    mostraAST(ast->filho2, altura);
    mostraAST(ast->filho3, altura);
    // for (int i = 0; i< 3; i++) 
    //     mostraAST(ast->filho[i], altura);

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