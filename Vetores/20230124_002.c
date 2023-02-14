#include <stdio.h>
#include <stdlib.h>

void sequencia_reversa(int sequencia[], int n){

     for (int i = n-1; i >= 0; i--){

        if (i == 0){
            printf("%d\n", sequencia[i]);
        }
        else{
            printf("%d ", sequencia[i]);
        }

    }

}

int main(){

    int n;

    printf("Digite o tamanho da sequencia (o numero precisa ser menor que 100)\n");
    scanf("%d", &n);

    while ((n>100)||(n<0)){

        printf("O numero digitado nao eh valido, digite novamente:\n");
        scanf("%d", &n);

    }

    int sequencia[n];

    printf("Digite a sequencia de numeros:\n");

    for (int i = 0; i < n; i++){

        scanf("%d", &sequencia[i]);

    }

    sequencia_reversa(sequencia, n);

    return 0;
}
