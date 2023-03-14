#include <stdio.h>
#include <stdlib.h>

int *ponteiro (int *inicial, int *final, int valor) {
    int *pvet;
    for (pvet=inicial; pvet<= final; pvet++){
        if (*pvet == valor) {
            return pvet;
        }
    }
    return NULL;
}
int main () {
    int vet[10] = {1, 2, 2, 2, 4, 5, 6, 7, 8, 9};
    int *achei = ponteiro(&vet[0], &vet[9], 2);
    int *pvet = achei + 1;
    while (achei != NULL) {
        printf("Endereco: %d\n", achei);
        achei = ponteiro (pvet, &vet[9], 2);
        pvet = achei + 1;
    }

    return 0;
}

