#include <stdio.h>
#include <stdlib.h>

void frequencia(){

    int n, d;
    int aux = 0;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    int naux = n;

    printf("Digite um numero inteiro de 0 a 9: \n");
    scanf("%d", &d);

    while((d<0)||(d>9)){

        printf("O numero nao eh valido, digite novamente: \n");
        scanf("%d", &d);

    }

    while(n>0){

        if (n%10 == d){aux++;}

        n = n/10;

    }

    printf("O numero %d aparece em %d %d vezes\n", d, naux, aux);

}

int main(){

    frequencia();

    return 0;

}
