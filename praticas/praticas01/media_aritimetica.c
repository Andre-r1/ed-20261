#include <stdio.h>
float media_aritmetica(int *numeros, int size){
    float result = 0;
    for(int i=0;i<size;i++){
        if(numeros[i] >= 100){
            printf("N maior que 100\n");
            return 0;
        }
        result += numeros[i];
    }
    return result/size;
}

int main(){
    printf("Testar inserir 4 numeros\n");
    int numeros1[] = {1,3,7,9};
    int k = sizeof(numeros1)/sizeof(numeros1[0]);
    printf("media: %.2f\n",media_aritmetica(numeros1, k));

    
    printf("Testar inserir 7 numeros\n");
    int numeros2[] = {2,9,16,17,13,22,27};
    k = sizeof(numeros2)/sizeof(numeros2[0]);
    printf("media: %.2f\n",media_aritmetica(numeros2, k));


    printf("testar n<=100\n");
    int numeros3[] = {101, 99, 80};
    k = sizeof(numeros3)/sizeof(numeros3[0]);
    printf("media: %.2f\n",media_aritmetica(numeros3, k));

    return 0;
}