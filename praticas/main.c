#include <stdio.h>
#include "lista_linear.h"

int main() {

    Lista *lista = lista_criar();

    lista_inserir(lista, 11);
    lista_inserir(lista, 20);
    lista_inserir(lista, 30);
    lista_inserir(lista, 40);
    lista_inserir(lista, 82);
    lista_inserir(lista, 60);
    lista_inserir(lista, 95);

    printf("Elementos da lista:\n");
    lista_exibir(lista);

    if (lista_buscar(lista, 20))
        printf("Valor encontrado %i\n");
    else
        printf("Valor nao encontrado!\n");

    printf("\nRemover 20\n");
    lista_remover(lista, 20);

    lista_exibir(lista);

    printf("\nLista vazia? ");

    if (lista_esta_vazia(lista))
        printf("Sim\n");
    else
        printf("Nao\n");

    lista_destruir(lista);

    return 0;
}
