#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int decimal_para_binario(int decimal){

    int binario = 0;
    int num = 0;

    while (decimal > 0){

        binario = binario + ((decimal%2)*pow(10, num));
        num++;
        decimal = decimal/2;

    }

    return binario;

}

int main(){

    int decimal;

    printf("Digite um numero decimal:\n");
    scanf("%d", &decimal);

    int binario = decimal_para_binario(decimal);

    printf("O numero %d em binario eh: %d\n", decimal, binario);

    return 0;

}
