#ifndef TABELA_HASH_H
#define TABELA_HASH_H

typedef struct hash TabelaHash;

TabelaHash *criar_hash(int tamanho);
void inserir_na_hash(TabelaHash *f, int valor);
int buscar_na_hash(TabelaHash *f, int valor);
void remover_da_hash(TabelaHash *f, int valor);
void exibir_hash(TabelaHash *f);
int hash_vazia(TabelaHash *f);
void destruir_hash(TabelaHash *f);

#endif