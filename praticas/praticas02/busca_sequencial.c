#include <stdio.h>
#include <time.h>

int busca_sequencial(int *vet, int tamanho, int k){
    for(int i = 0; i<tamanho; i++){
        if(vet[i]==k){
            return i;
        }
    }
    printf("Numero nao encontrado!\n");
    return -1;
}

int main(){
    int posicao;
    clock_t tempo_inicial, tempo_final;
    double duracao;
    int vetor[100] = {
        42, 87, 13, 99, 5, 76, 54, 21, 68, 30,
        91, 2, 73, 44, 60, 18, 27, 85, 9, 66,
        39, 70, 11, 95, 24, 58, 33, 80, 6, 47,
        72, 14, 90, 3, 62, 28, 55, 77, 19, 88,
        1, 53, 41, 96, 25, 67, 10, 82, 36, 59,
        74, 17, 93, 4, 61, 29, 48, 83, 20, 71,
        37, 64, 8, 97, 26, 52, 45, 79, 12, 69,
        34, 57, 92, 15, 63, 22, 50, 84, 7, 75,
        31, 89, 16, 65, 40, 98, 23, 56, 35, 78,
        94, 32, 81, 49, 86, 38, 100, 43, 51, 46
    };

    printf("Pesquisando valor no inicio 1000 vezes\n");
    tempo_inicial = clock();
    for(int i = 0; i<1000; i++){
        posicao = busca_sequencial(vetor, 100,35);
    }
    tempo_final = clock();
    duracao = (double)(tempo_final-tempo_inicial)/CLOCKS_PER_SEC;

    printf("A duracao total foi de: %.6f seg e o numero 35 esta na posicao: %i\n", duracao, posicao);


    printf("Pesquisando valor no final 1000 vezes\n");
    tempo_inicial = clock();
    for(int i = 0; i < 1000; i++){
        posicao = busca_sequencial(vetor, 100,38);
    }
    tempo_final = clock();
    duracao = (double)(tempo_final-tempo_inicial)/CLOCKS_PER_SEC;

    printf("A duracao total foi de: %.6f seg e o numero 38 esta na posicao: %i\n", duracao, posicao);

    printf("O algoritmo eh O(1) no melhor caso procurando elemento no inicio e O(n) no pior proucurando elemento no final\n");

    return 0;
}