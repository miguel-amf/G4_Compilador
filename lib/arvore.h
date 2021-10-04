#ifndef ARVORE_SINTATICA_ABSTRATA_H
#define ARVORE_SINTATICA_ABSTRATA_H

typedef struct AST{
    char* nome_regra;
    struct AST* pai;
    struct AST* filho;
    char tipo[10];
    char cast[10];
    char simbolo[100];
} AST;

AST* criaNo(char* nome_regra);
void mostraAST(AST *ast, int altura);
void liberaAST();

#endif