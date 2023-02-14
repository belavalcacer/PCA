#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int binario_para_decimal(int binario){

    int decimal = 0;
    int aux = 0;

    for (int i = binario; i > 0; i = i/10){
        decimal = decimal + ((i%10)*pow(2, aux));
        aux++;
    }

    return decimal;

}

int main(){

    int binario;

    printf("Digite um numero binario:\n");
    scanf("%d", &binario);

    int decimal = binario_para_decimal(binario);

    printf("O binario %d em decimal eh: %d\n", binario, decimal);

    return 0;

}
