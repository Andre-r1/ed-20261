#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct no {
    int valor;
    struct no *proximo;
} No;

struct pilha {
    No *topo;
};

Pilha *criar_pilha(void) {
    Pilha *p = malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

void empilhar_pilha(Pilha *p, int valor) {
    No *novo = malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = p->topo;
    p->topo = novo;
}

int desempilhar_pilha(Pilha *p) {
    No *removido = p->topo;
    int valor = removido->valor;
    p->topo = removido->proximo;
    free(removido);
    return valor;
}

int topo_da_pilha(Pilha *p) {
    return p->topo->valor;
}

int pilha_vazia(Pilha *p) {
    return p->topo == NULL;
}

void mostrar_pilha(Pilha *p) {
    No *atual = p->topo;
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}

void destruir_pilha(Pilha *p) {
    while (!pilha_vazia(p))
        desempilhar_pilha(p);
    free(p);
}