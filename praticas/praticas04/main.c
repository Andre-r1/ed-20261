#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

#define TAMANHO 10000

int main() {
    clock_t tempo_inicial, tempo_final;
    double duracao_bubble, duracao_selection, duracao_quick;

    int vetor [TAMANHO];
    for (int i = 0; i < TAMANHO; i++) 
    {
        vetor [i] = rand();
    }

    // Bubble Sort
    tempo_inicial = clock();
    bubble_sort (vetor , TAMANHO);
     tempo_final = clock();
    // Tempo de execução do Bubble Sort
    duracao_bubble = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;
    

    // Selection Sort
    tempo_inicial = clock();
    selection_sort(vetor, 0, TAMANHO - 1);
    tempo_final = clock();
    // Tempo de execução do Selection Sort
    duracao_selection = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;

    // Quick Sort
    tempo_inicial = clock();
    quick_sort(vetor, 0, TAMANHO - 1);
    tempo_final = clock();
    // Tempo de execução do Quick Sort
    duracao_quick = (double)(tempo_final - tempo_inicial) / CLOCKS_PER_SEC;

    // Vetor ordenado
    imprimir_vetor (vetor, TAMANHO);

    // Tempo de execução de cada algoritmos
    printf("Tempo de resposta do Bubble Sort: %f segundos\n", duracao_bubble); // 10mil elementos, o tempo foi 0.268000 segundos
    printf("Tempo de resposta do Selection Sort: %f segundos\n", duracao_selection); // 10mil elementos, o tempo foi 0.048000 segundos
    printf("Tempo de resposta do Quick Sort: %f segundos\n", duracao_quick); // 10mil elementos, o tempo foi 0.127000 segundos

    return 0;
}