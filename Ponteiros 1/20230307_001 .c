#include <stdio.h>
#include <stdlib.h>

void imprime (float *inicial, float *final) {
    float *pvet;
    for (pvet = inicial; pvet <=final; pvet++) {
        printf("%.2f \n", *pvet);
    }
}


int main()
{
    float vet[5] = {5.5, 6.7, 8.9, 7.8, 6.3};
    float vet2[5] = {4.5, 6.9, 3.5, 2.7, 7.7};
    float vet3[7] = {5.6, 4.6, 7.6, 5.7, 6.0, 5.4, 8.7};

    imprime(&vet[0], &vet[2]);
    imprime (&vet[2], &vet[4]);
    imprime (&vet2[2], &vet2[5]);
    imprime (&vet2[1], &vet2[4]);
    imprime (&vet3[5], &vet3[7]);
    imprime (&vet3[1], &vet3[4]);

    return 0;
}
