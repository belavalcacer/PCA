#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso_ideal;

    printf("Digite sua altura: "); scanf("%f", &altura);
    peso_ideal = (72.7*altura) - 58;
    printf("Peso ideal: %.2f", peso_ideal);

    return 0;
}
