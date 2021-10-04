#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../lib/tabelaSimbolo.h"

TabelaSimbolo* insereSimbolo(TabelaSimbolo* id, int escopo, char* simbolo, char* tipoEntrada, char* tipo, int linha, int coluna, int parametros){
    if(parametros>0)
        escopo++;
    if(id == NULL){
        TabelaSimbolo* temp = (TabelaSimbolo*)malloc(sizeof(TabelaSimbolo));
        temp->escopo = escopo;
        strcpy(temp->simbolo, simbolo);
        strcpy(temp->tipoEntrada, tipoEntrada);
        strcpy(temp->tipo, tipo);
        temp->linha = linha;
        temp->coluna = coluna;
        temp->proximo = NULL;
        id = temp;
    }
    else{
        TabelaSimbolo* cur = id;
        TabelaSimbolo* prev = NULL;
        int present = 0;
        while(cur != NULL){
            if((cur->escopo == escopo) && (strcmp(cur->simbolo,simbolo)==0)){
                if(strcmp(tipoEntrada, "Funcao") == 0){
                    printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Funcao ja declarada!!!\n", linha, coluna, simbolo);
                }else{
                    printf("Linha: %d - Coluna: %d - Identificador: %s - Erro Semantico - Variavel ja declarada!!!\n", linha, coluna, simbolo);
                }
                present = 1;
            }
            prev = cur;
            cur = cur->proximo;
        }
        if(present == 0){
            TabelaSimbolo* temp = (TabelaSimbolo*)malloc(sizeof(TabelaSimbolo));
            temp->escopo = escopo;
            strcpy(temp->simbolo, simbolo);
            strcpy(temp->tipoEntrada, tipoEntrada);
            strcpy(temp->tipo, tipo);
            temp->linha = linha;
            temp->coluna = coluna;
            temp->proximo = NULL;
            prev->proximo = temp;
        }
    }
    
    return id;
}

void mostraTabela(TabelaSimbolo* id){
    TabelaSimbolo* p = id;
    printf("\n\n\n");
    printf("\t\t\t Tabela de Simbolos \t\t\t\n\n");
    printf("\t Simbolo \t\t Tipo Entrada \t\t Tipo \t\t Escopo \t Linha \t\t Coluna \n");
    if(p == NULL){
        return;
    }
    else{
        while(p != NULL){
            printf("\t %-20s  \t %-20s \t %-10s \t %-10d \t %-10d \t %-10d \n", p->simbolo, p->tipoEntrada, p->tipo, p->escopo, p->linha, p->coluna);
            p = p->proximo;
        }
    }
}

void limpaTabela(TabelaSimbolo* id){
    TabelaSimbolo* p = id;
    if(p == NULL){
        return;
    }
    if(p->proximo != NULL){
        limpaTabela(p->proximo);
    }
    free(p);
}

int procuraMain(TabelaSimbolo* id){
    while(id != NULL){
        if((id->escopo == 0) && (strcmp(id->simbolo, "main") == 0) && (strcmp(id->tipoEntrada, "Funcao") == 0)){
            return 1;
        }
        id = id->proximo;
    }
    return 0;
}

int procuraVariavel(TabelaSimbolo* id, char* simbolo){
    while(id != NULL){
        if((strcmp(id->simbolo, simbolo) == 0)){
            return 1;
        }
        id = id->proximo;
    }
    return 0;
}