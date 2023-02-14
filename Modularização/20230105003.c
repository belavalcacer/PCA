#include <stdio.h>
#include <stdlib.h>

int numeroPar(){

    int num;

    printf("Digite um numero par:\n");
    scanf("%d", &num);

    while (num%2 != 0){

        printf("O numero nao eh par, digite novamente:\n");
        scanf("%d", &num);

    }

    return num;

}

void numeroPerfeito(int num){

    int perfeito = 0;

    for (int i=1; i<num; i++){

        if (num%i == 0){

            perfeito = perfeito + i;

        }

    }

    if (perfeito == num){printf("%d eh um numero perfeito\n", num);}

    else{printf("%d nao eh um numero perfeito\n", num);}

}

int main(){

    int num = numeroPar();
    numeroPerfeito(num);

    return 0;
}
