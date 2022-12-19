#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metro, centimetro;
    printf("Quantos metros? \n"); scanf("%f", &metro);

    centimetro = metro*100;
    printf("Equivalente em centimetros: %.1f", centimetro);

    return 0;
}
