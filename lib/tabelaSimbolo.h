#ifndef TABELA_SIMBOLO_H
#define TABELA_SIMBOLO_H
#define MAX 1000

typedef struct{
    char *id;
    char *token;
    struct TabelaSimbolo *proximo;
} TabelaSimbolo;

// TabelaSimbolo *inicio, *final;

typedef struct node{
    int index;
    int scope;
    char symbol[MAX];
    char lineno[MAX];
    char type[MAX];
    char value[MAX];
    struct node* next; 
}node;

node* InsertSymbol(node*,int,char*,int,int);

void display(node* head);

void limpaTabela(node* head);


#endif