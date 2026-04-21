#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // ligou conometro
    clock_t tempo_inicial = clock();

    long int soma = 10 + 20;

    // desligou conometro
    clock_t  tempo_final = clock();

    float duracao = (float) (tempo_final - tempo_inicial) 
        / CLOCKS_PER_SEC;

    printf("O tempo de execucao foi %.5f seg\n", duracao);

    tempo_inicial = clock();

    for (long int j=0; j<10000000000L; j++) {
        soma = soma + 1;
    } 
    
    for (int i=0; i<1000000; i++) {
        soma = soma + 1;
    }
    tempo_final = clock();

    duracao = (float) (tempo_final - tempo_inicial) 
        / CLOCKS_PER_SEC;

    printf("O tempo de execucao foi %.5f seg\n", duracao);

    return 0;
}