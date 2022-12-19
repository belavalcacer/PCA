#include <stdio.h>
#include <stdlib.h>

int main()

{
    float lado, area;
    printf("Digite o valor do lado: "); scanf("%f", &lado);

    area = (lado*lado);
    printf("Area do quadrado: %.1f", area);

    return 0;
}
