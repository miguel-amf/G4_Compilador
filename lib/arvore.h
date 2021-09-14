#ifndef ARVORE_SINTATICA_ABSTRATA_H
#define ARVORE_SINTATICA_ABSTRATA_H

typedef struct AST{
    char* nome_regra;
    struct AST* pai;
    struct AST* filho;
} AST;

AST* criaNo(char* nome_regra);
void mostraAST(AST *ast, int altura);
void liberaAST(AST *ast);

#endif