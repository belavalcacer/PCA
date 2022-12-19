#include <stdio.h>
#include <stdlib.h>

int main()
{
    float farenheit, celsius;

    printf("Valor em Farenheit: "); scanf("%f", &farenheit);

    celsius = (5 * (farenheit-32) / 9);
    printf("Valor equivalente em Celsius: %.1f", celsius);
    return 0;
}
