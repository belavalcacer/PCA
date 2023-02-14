#include <stdio.h>
#include <stdlib.h>

int frequencia(int n, int d){

    int aux = 0;

    while(n>0){

        if (n%10 == d){aux++;}

        n = n/10;

    }

    return aux;

}

int permutacao(int a, int b){

    int auxx, d, permut = 0;

    if (a > b){auxx = a;}

    else{auxx = b;}

    d = auxx%10;

    while (auxx > 0){

        if (frequencia(a, d) != frequencia(b, d)){

            permut++;
            break;

        }

        auxx = auxx/10;
        d = auxx%10;

    }

    return !permut;

}

int main(){

    int a, b, permut;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &a);

    printf("Digite um numero inteiro: \n");
    scanf("%d", &b);

    permut = permutacao(a, b);

    if (permut){printf("O numero %d eh uma permutacao de %d\n", a, b);}

    else{printf("O numero %d nao eh uma permutacao de %d\n", a, b);}

}
