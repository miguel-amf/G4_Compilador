#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../lib/tabelaSimbolo.h"

node* InsertSymbol(node* head, int scope, char* symbol, int lineno, int paran){
    // if(paran>0){
    //     scope++;
    // }
    // else{;
    // }
    if(head == NULL){
        node* temp = (node*)malloc(sizeof(node));
        temp->index = 1;
        temp->scope = scope;
        strcpy(temp->symbol,symbol);
        char str[4];
        sprintf(str, "%d", lineno);
        strcpy(temp->lineno,str);
        temp->next = NULL;
        head = temp;
    }
    else{
        node* cur= head;
        node* prev = NULL;
        int present = 0;
        while(cur != NULL){
            if((cur->scope == scope) && (strcmp(cur->symbol,symbol)==0)){
                char str[4];
                sprintf(str, ", %d", lineno);
                strcat(cur->lineno,str);
                present = 1;
            }
            prev = cur;
            cur = cur->next;
        }
        if(present == 0){
            node* temp = (node*)malloc(sizeof(node));
            temp->index = (prev->index)+1;
            temp->scope = scope;
            strcpy(temp->symbol,symbol);
            char str[4];
            sprintf(str, "%d", lineno);
            strcpy(temp->lineno,str);
            temp->next = NULL;
            prev->next = temp;
        }
    }
    return head;
}

void display(node* head){
    node* p = head;
    printf("\t\t\t SYMBOL TABLE \t\t\t\n\n");
    printf("\t Index \t\t Symbol \t Scope \t\t Line Number \n");
    if(p == NULL){
        return;
    }
    else{
        while(p != NULL){
            printf("\t %d \t\t %s \t\t %d \t\t %s \n",p->index,p->symbol,p->scope,p->lineno);
            p = p->next;
        }
    }
}

void limpaTabela(node* head){
    node* p = head;
    if(p == NULL){
        return;
    }
    if(p->next != NULL){
        limpaTabela(p->next);
    }
    free(p);
}