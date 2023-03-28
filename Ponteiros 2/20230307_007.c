#include <stdio.h>
#include <stdlib.h>

void min_max(int vetor[], int *min, int *max, int tam){
    tam = tam/sizeof(int);
    *min = vetor[0];
    *max = vetor[0];
    for(int *pvet = vetor; pvet <= &vetor[tam - 1]; pvet++){
        if(*pvet < *min){
            *min = *pvet;
        }

        else{
            if(*pvet > *max){
                *max = *pvet;
            }
        }
    }
}

int main(){

    int vetor[] = {25, 65, 13, 7, 1, 9, -5};
    int min, max;

    min_max(vetor, &min, &max, sizeof(vetor));

    printf("Valor maximo: %d\n", max);
    printf("Valor minimo: %d\n", min);

    return 0;
}

