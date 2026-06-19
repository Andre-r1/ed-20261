#include <stdio.h>
#include "pilha.h"

int main(void) {
    Pilha *p = criar_pilha();

    empilhar_pilha(p, 10);
    empilhar_pilha(p, 25);
    empilhar_pilha(p, 30);
    empilhar_pilha(p, 21);
    empilhar_pilha(p, 15);

    mostrar_pilha(p);
    printf("topo: %d\n", topo_da_pilha(p));

    desempilhar_pilha(p);
    mostrar_pilha(p);

    desempilhar_pilha(p);
    mostrar_pilha(p);

    desempilhar_pilha(p);
    mostrar_pilha(p);

    destruir_pilha(p);
    return 0;
}