#include<stdio.h>
#include "fila.h"

int main(){

    Fila *fila = criar_fila();

    enfileirar_fila(fila,1);
    enfileirar_fila(fila,2);
    enfileirar_fila(fila,3);
    enfileirar_fila(fila,4);
    enfileirar_fila(fila,5);
    enfileirar_fila(fila,6);


    exibir_fila(fila);

    printf("\nInicio da fila: %d\n", inicio_da_fila(fila));

    desenfileirar_fila(fila);

    exibir_fila(fila);

    printf("\nInicio da fila: %d\n", inicio_da_fila(fila));

    if(fila_vazia(fila)){
        printf("Fila vazia\n");
    }else{
        printf("A fila nao esta vazia\n");
    }

    destruir_fila(fila);



    return 0;
}