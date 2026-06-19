#ifndef FILA_H
#define FILA_H

typedef struct fila Fila;


Fila *criar_fila();
void destruir_fila(Fila *fila);
void enfileirar_fila(Fila *fila, int valor);
void desenfileirar_fila(Fila *fila);
int inicio_da_fila(Fila *fila);
void exibir_fila(Fila *fila);
int fila_vazia(Fila *fila);

#endif