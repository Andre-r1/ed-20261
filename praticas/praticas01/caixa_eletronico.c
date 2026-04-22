#include <stdio.h>
#include <stdlib.h>

void saque(int saque){
    if(saque>1000){
        printf("Saque excede o limite!\n");
        return;
    }
    if(saque<0){
        printf("Saque invalido!\n");
        return;
    }
    int celula200, celula100, celula50, celula20, celula10, celula5, celula2;
    int total = saque;
    celula200 = saque/200;
    saque = saque%200;
    celula100 = saque/100;
    saque = saque%100;
    celula50 = saque/50;
    saque = saque%50;
    celula20 = saque/20;
    saque = saque%20;
    celula10 = saque/10;
    saque = saque%10;
    celula5 = saque/5;
    saque = saque%5;
    celula2 = saque/2;
    saque = saque%2;

    if(saque == 1){
        printf("vai faltar 1 real!\n");
        return;
    }
    
    printf("A menor quantidade de notas e: %i notas de 200, %i notas de 100, %i notas de 50, %i notas de 20, %i notas de 10, %i notas de 5, %i notas de 2\n", celula200, celula100, celula50, celula20, celula10, celula5, celula2);
    return;
};

int main(){
   printf("teste para sacar 1000 reais\n");
   saque(1000);
   printf("teste para sacar 900 reais\n");
   saque(900);
   printf("teste para sacar -100 reais\n");
   saque(-100);
   printf("teste para sacar 150 reais\n");
   saque(150);
   printf("teste para sacar 3 reais\n");
   saque(3);
    
    return 0;
}