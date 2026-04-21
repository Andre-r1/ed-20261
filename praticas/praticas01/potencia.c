#include<stdio.h>

int potencia_base(int expoente, int base){
    int base1 = 1;
    if (base < 0 || expoente < 0){
        return 0;
    } else{
        for (int i = 0; i < expoente; i++){
            base1 = base1*base;
    }
    return base1;
}
}

int main(){ 
    int pot = 0;
    pot = potencia_base(3, 5);
    printf("Expoente = 3 \nBase = 5 \nPotencia da base e = %i\n", pot);
    pot = potencia_base(4, 2);
    printf("Expoente = 4 \nBase = 2 \nPotencia da base e = %i\n", pot);
    pot = potencia_base(2, 2);
    printf("Expoente = 2 \nBase = 2 \nPotencia da base e = %i\n", pot);

    return 0;
}