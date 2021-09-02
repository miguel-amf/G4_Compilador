#ifndef TABELA_SIMBOLO_H
#define TABELA_SIMBOLO_H

typedef struct{
    char *id;
    char *token;
    struct TabelaSimbolo *proximo;
} TabelaSimbolo;

TabelaSimbolo *inicio, *final;

#endif