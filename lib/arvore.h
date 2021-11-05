#ifndef ARVORE_SINTATICA_ABSTRATA_H
#define ARVORE_SINTATICA_ABSTRATA_H

typedef struct AST{
    char* nome_regra;
    struct AST* pai;
    struct AST* filho;
    char tipo[20];
    char cast[20];
    char simbolo[100];
    char tableTac[300];
    char codeTac[300];
    int regTac;
    int auxTac;
} AST;

AST* criaNo(char* nome_regra);
void mostraAST(AST *ast, int altura);
void liberaAST();
void castDeTudo(char* tipoToken, AST* esquerda, AST* direita);

#endif