#ifndef ARVORE_BINARIA_H
#define ARVORE_BINARIA_H

typedef struct arvore Arvore;

Arvore * criar_arvore();
void inserir_arvore(Arvore *arvore, int valor);
int arvore_esta_vazia(Arvore *arvore);
void destruir_arvore(Arvore *arvore);
void exibir_arvore_pre_ordem(Arvore *arvore);
void exibir_arvore_em_ordem(Arvore *arvore);

#endif
