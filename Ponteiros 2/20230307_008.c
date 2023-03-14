#include <stdio.h>
#include <stdlib.h>


int main () {
    int inteiro = 10;
    float real = 4.1;
    char caractere = 'e';

    int *pnteiro = &inteiro;
    float *preal = &real;
    char *pcarac = &caractere;

    printf("Valores antes da alteracao: %d\n", inteiro);
    printf("Valores antes da alteracao: %.2f\n", real);
    printf("Valores antes da alteracao: %c\n", caractere);

    *pnteiro = 7;
    *preal = 10.0;
    *pcarac = 'i';

    printf("Valores depois da alteracao: %d\n", inteiro);
    printf("Valores depois da alteracao: %.2f\n", real);
    printf("Valores depois da alteracao: %c\n", caractere);





    return 0;
}

