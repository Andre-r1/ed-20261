#include <stdio.h>
#include <string.h>
#include "agenda.h"


int main(){
    Agenda agenda = criar_agenda(10);

    Contato contato;
    strcpy(contato.nome, "Jose");
    strcpy(contato.telefone, "1111-1111");

    adicionar_contato(&agenda, contato);

    listar_contato(&agenda);

    Contato outro;
    strcpy(contato.nome, "Maria");
    strcpy(contato.telefone, "2222-2222");

    adicionar_contato(&agenda, contato);
    
    listar_contato(&agenda);

    return 0;
}