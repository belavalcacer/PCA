#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    float num3, calculo1, calculo2, calculo3;

    printf("Digite o primeiro numero: \n"); scanf("%d", &num1);
    printf("Digite o segundo numero: \n"); scanf("%d", &num2);
    printf("Digite o terceiro numero: \n"); scanf("%f", &num3);

    calculo1 = (num1*2)*(num2/2);
    calculo2 = (num1*3) + num3;
    calculo3 = (num3*num3*num3);

    printf("Resultado 1: %.2f \n", calculo1);
    printf("Resultado 2: %.2f \n", calculo2);
    printf("Resultado 3: %.2f \n", calculo3);

    return 0;
}
