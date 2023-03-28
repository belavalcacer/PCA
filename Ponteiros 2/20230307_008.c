#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b){
    float aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    float a = 5.8;
    float b = 7.8;

    printf("Valores antes da troca:\n");
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);


    troca(&a, &b);

    printf("Valores depois da troca:\n");
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);

}


