#include <stdio.h>
#include "tabela_hash.h"

int main(void) {
    TabelaHash *f = criar_hash(6);

    inserir_na_hash(f, 20);
    inserir_na_hash(f, 30);
    inserir_na_hash(f, 35);
    inserir_na_hash(f, 9);
    inserir_na_hash(f, 14);
    inserir_na_hash(f, 25);


    exibir_hash(f);

    printf("buscar 30: %d\n", buscar_na_hash(f, 30));
    printf("buscar 100: %d\n", buscar_na_hash(f, 100));

    remover_da_hash(f, 30);
    exibir_hash(f);

    printf("vazia: %d\n", hash_esta_vazia(f));

    destruir_hash(f);
    return 0;
}