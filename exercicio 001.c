#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma;
    printf("Digite o primeiro numero:\n"); scanf("%d", &num1);
    printf("Digite o segundo numero:\n"); scanf("%d", &num2);

    soma = num1 + num2;
    printf("Resultado da soma: %d", soma);
    return 0;

}
