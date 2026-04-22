#include <stdio.h>
#include <time.h>

void percorre_matriz1(int *vetor, int tamanho){
    printf("Percorrendo matriz com 1 laco for: \n");
    printf("[");
    for(int i = 0; i<tamanho;i++){
        printf(" %i ", *(vetor+i));
    }
    printf("]\n");
}

void percorre_matriz2(int a, int b,int vetor[a][b]){
    printf("Percorrendo matriz com 2 lacos for: \n");
    printf("[");
    for(int i = 0; i<a;i++){
        for(int j = 0; j<b;j++){
            printf(" %i ", vetor[i][j]);
        }
    }
    printf("]\n");
}



int main(){
    clock_t tempo_inicial, tempo_final;
    double duracao;

    int matriz[10][10] = {
    {42, 87, 13, 99, 5, 76, 54, 21, 68, 30},
    {91, 2, 73, 44, 60, 18, 27, 85, 9, 66},
    {39, 70, 11, 95, 24, 58, 33, 80, 6, 47},
    {72, 14, 90, 3, 62, 28, 55, 77, 19, 88},
    {1, 53, 41, 96, 25, 67, 10, 82, 36, 59},
    {74, 17, 93, 4, 61, 29, 48, 83, 20, 71},
    {37, 64, 8, 97, 26, 52, 45, 79, 12, 69},
    {34, 57, 92, 15, 63, 22, 50, 84, 7, 75},
    {31, 89, 16, 65, 40, 98, 23, 56, 35, 78},
    {94, 32, 81, 49, 86, 38, 100, 43, 51, 46}
};

    tempo_inicial = clock();
    percorre_matriz1((int *)matriz, 100);
    tempo_final = clock();
    duracao = (double)(tempo_final-tempo_inicial)/CLOCKS_PER_SEC;
    printf("Gastou %.6f seg para percorrer\n\n", duracao);

    tempo_inicial = clock();
    percorre_matriz2(10,10, matriz);
    tempo_final = clock();
    duracao = (double)(tempo_final-tempo_inicial)/CLOCKS_PER_SEC;
    printf("Gastou %.6f seg para percorrer\n\n", duracao);

    printf("Ambos sao O(n) por que todos os elementos da matriz sao percorridos em ambos os casos\n");

    return 0;
}