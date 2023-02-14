#include <stdio.h>
#include <stdlib.h>

void par_verifica(int sequencia[], int n, int par[]){

    int m = 0;

    for (int i=0; i<n; i++){
        if(sequencia[i]%2 == 0){
            par[m] = sequencia[i];
            m++;
        }
    }
}

int qtde_par(int sequencia[], int n){

    int m = 0;

    for (int i=0; i<n; i++){

        if(sequencia[i]%2 == 0){
            m++;
        }
    }
    return m;
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

    for (int i = 0; i < n; i++){scanf("%d", &sequencia[i]);}

    int m = qtde_par(sequencia, n);

    int par[m];

    par_verifica(sequencia, n, par);

    for (int i=0; i<m; i++){printf("%d ", par[i]);}
}
