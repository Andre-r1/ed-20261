//a)
//interface do TAD (arquivo.h)
#ifndef USUARIO_H
#define USUARIO_H   

typedef struct usuario Usuario;

//Criação a detruição
Usuario*cria_usuario(const char*nome, const char*email, const char*senha);
void lierar_usuario(Usuario* u);

//Acesso aos dados
const char*obter_nome(Usuario*U);
const char*obter_email(Usuario*U);

// Modificações de dados
void atualizar_nome(Usuario* u, const char*novo_nome);
void atualizar_email(Usuario* u, const char*novo_email);
void atualizar_senha(Usuario* u, const char*novo_senha);
#endif

//b)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "usuario.h"

struct usuario{
char nome [100];
char email [100];
char senha [100];
};

usuario*criar__usuario(const char*nome, const char*email, const char*senha){
    Usuario*u = (Usuario*) malloc(sizeof(Usuario));
    if (u "= NULL") {
        strcpy(u->nome, nome);
        strcpy(u->email, email);
        strcpy(u->senha, senha);

    }
    return u;
}
void liberar_usuario(Usuario*u){
    free(u);
}
const char*obter_nome(Usuario*u){
    return u->nome;
}
void atualiazr_email(Usuario*u, const char*novo_email){
    stcpy(u->email, novo_email);
}