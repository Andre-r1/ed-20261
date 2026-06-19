#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

typedef struct no{

    int valor;
    struct no *proximo;
}No;

typedef struct fila{
    No *inicio;
    No *fim;
}Fila;

Fila *criar_fila(){
    Fila *fila = (Fila*) malloc(sizeof(Fila));

    if (fila == NULL){
        return NULL;
    }
    fila->inicio = NULL;
    fila->fim = NULL;

    return fila;
}

int fila_vazia(Fila *fila){

    return (fila->inicio == NULL) && (fila != NULL);
}

void enfileirar_fila(Fila *fila, int valor){
    No *no = (No*) malloc(sizeof(No));

    no->valor = valor;
    no->proximo = NULL;

    if(fila_vazia(fila)){
        fila->inicio = no;
        fila->fim = no;
    } else{
        fila->fim->proximo = no;
        fila->fim = no;
    }
}

void desenfileirar_fila(Fila *fila){
    if(fila_vazia(fila))
        return;
    
    No *primeiro = fila->inicio;
    if(primeiro->proximo != NULL){
        fila->inicio = primeiro->proximo;
    }else{
        fila->inicio = NULL;
        fila->fim = NULL;
    }

    free(primeiro);
    return;
}

int inicio_da_fila(Fila *fila){
    if(fila_vazia(fila)){
        return -1;
    }
    return fila->inicio->valor;
}

void exibir_fila(Fila *fila){
    No *aux = fila->inicio;

    while(aux != NULL){
    printf("%d ", aux->valor);
    aux = aux->proximo;
    }
    printf("\n");
}

void destruir_fila(Fila *fila){
    free(fila);
}