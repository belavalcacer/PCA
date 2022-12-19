#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, farenheit;

    printf("Digite o valor Celsius: "); scanf("%f", &celsius);

    farenheit = (celsius * 9/5) + 32;
    printf("Valor equivalente em Farenheit: %.2f", farenheit);
    return 0;
}
