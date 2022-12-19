#include <stdio.h>
#include <stdlib.h>

int main()

{
    float raio, area, pi = 3.14;
    printf("Digite o valor do raio: "); scanf("%f", &raio);

    area = pi*(raio*raio);
    printf("Area do circulo: %.2f", area);

    return 0;
}
