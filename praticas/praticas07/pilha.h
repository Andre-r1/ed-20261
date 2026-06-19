#ifndef PILHA_H
#define PILHA_H

typedef struct pilha Pilha;

Pilha *criar_pilha();
void empilhar_pilha(Pilha *p, int valor);
int desempilhar_pilha(Pilha *p);
int topo_da_pilha(Pilha *p);
int pilha_vazia(Pilha *p);
void mostrar_pilha(Pilha *p);
void destruir_pilha(Pilha *p);

#endif