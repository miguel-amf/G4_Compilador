#ifndef TABELA_SIMBOLO_H
#define TABELA_SIMBOLO_H

typedef struct TabelaSimbolo{
    int escopo;
    char simbolo[100];
    int linha;
    int coluna;
    char tipoEntrada[50];
    struct TabelaSimbolo* proximo; 
} TabelaSimbolo;

TabelaSimbolo* insereSimbolo(TabelaSimbolo* id, int escopo, char* simbolo, char* tipoEntrada, int linha, int coluna, int parametros);

void mostraTabela(TabelaSimbolo* id);

void limpaTabela(TabelaSimbolo* id);

#endif