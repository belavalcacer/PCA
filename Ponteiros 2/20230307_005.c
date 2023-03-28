#include <stdio.h>
#include <stdlib.h>

int ordenacao(int *valor1, int *valor2, int *valor3) {
    int n;
    int aux = 0;

    if (*valor1 > *valor2) {
        n = *valor1;
        *valor1 = *valor2;
        *valor2 = n;
        aux = 1;
    }
    if (*valor1 > *valor3) {
        n = *valor1;
        *valor1 = *valor3;
        *valor3 = n;
        aux = 1;
    }
    if (*valor2 > *valor3) {
        n = *valor2;
        *valor2 = *valor3;
        *valor3 = n;
        aux = 1;
    }

    if (*valor1 == *valor2 && *valor1 == *valor3) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int valor1, valor2, valor3;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &valor1);

    printf("Digite um numero inteiro: \n");
    scanf("%d", &valor2);

    printf("Digite um numero inteiro: \n");
    scanf("%d", &valor3);

    int igual = ordenacao(&valor1, &valor2, &valor3);

    printf("Valores ordenados: %d %d %d\n", valor1, valor2, valor3);

    if (igual) {
        printf("Os valores sao iguais.\n");
    }


    return 0;
}
