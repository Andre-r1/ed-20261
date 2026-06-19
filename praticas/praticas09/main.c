#include <stdio.h>
#include "arvore_binaria.h"

int main(){
    Arvore *arvore = criar_arvore();
    
    printf("%d \n" , arvore_esta_vazia(arvore));
    
    inserir_arvore(arvore, 2);
    inserir_arvore(arvore, 7);
    inserir_arvore(arvore, 9);
    inserir_arvore(arvore, 1);
    inserir_arvore(arvore, 26);
    inserir_arvore(arvore, 29);
    inserir_arvore(arvore, 20);
    inserir_arvore(arvore, 15);
    inserir_arvore(arvore, 5);
    inserir_arvore(arvore, 51);

    
    printf("%d\n", arvore_esta_vazia(arvore));

    exibir_arvore_em_ordem(arvore);
    printf("\n");
    exibir_arvore_pre_ordem(arvore);
    printf("\n");

    destruir_arvore(arvore);

    return 0;
}