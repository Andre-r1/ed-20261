#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

typedef struct no {
    int valor;
    struct no *proximo;
} No;

struct hash {
    No **tabela;
    int tamanho;
};

TabelaHash *criar_hash(int tamanho) {
    TabelaHash *f = (TabelaHash*)malloc(sizeof(TabelaHash));
    f -> tamanho = tamanho;
    f -> tabela = (No**)malloc(sizeof(No*)*tamanho);
    memset(f -> tabela, 0, sizeof(No*)*tamanho);
    return f;
}

void inserir_na_hash(TabelaHash *f, int valor) {
    int idx = valor % f -> tamanho;
    No *novo = malloc(sizeof(No));
    novo -> valor = valor;
    novo -> proximo = f -> tabela[idx];
    f -> tabela[idx] = novo;
}

int buscar_na_hash(TabelaHash *f, int valor) {
    int idx = valor % f -> tamanho;
    No *atual = f -> tabela[idx];
    while (atual != NULL) {
        if (atual -> valor == valor) return 1;
        atual = atual -> proximo;
    }
    return 0;
}

void remover_da_hash(TabelaHash *f, int valor) {
    int idx = valor % f -> tamanho;
    No *atual = f -> tabela[idx];
    No *anterior = NULL;
    while (atual != NULL) {
        if (atual -> valor == valor) {
            if (anterior == NULL)
                f -> tabela[idx] = atual -> proximo;
            else
                anterior -> proximo = atual -> proximo;
            free(atual);
            return;
        }
        anterior = atual;
        atual = atual -> proximo;
    }
}

void exibir_hash(TabelaHash *f) {
    for (int i = 0; i < f -> tamanho; i++) {
        printf("[%d]: ", i);
        No *atual = f -> tabela[i];
        while (atual != NULL) {
        printf("%d ", atual -> valor);
        atual = atual -> proximo;
        }
        printf("\n");
    }
}

int hash_esta_vazia(TabelaHash *f) {
    for (int i = 0; i < f -> tamanho; i++)
        if (f -> tabela[i] != NULL) return 0;
    return 1;
}

void destruir_hash(TabelaHash *f) {
    for (int i = 0; i < f -> tamanho; i++) {
        No *atual = f -> tabela[i];
        while (atual != NULL) {
        No *temp = atual;
        atual = atual -> proximo;
        free(temp);
        }
    }
    free(f -> tabela);
    free(f);
}