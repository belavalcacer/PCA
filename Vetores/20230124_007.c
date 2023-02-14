#include <stdio.h>
#include <stdlib.h>

int ocorrencia_vet(int sequencia[], int n, int num){

    int aux = 0;

    for (int i=0; i<n; i++){
        if (sequencia[i] == num){
            aux++;
        }
    }
    return aux;
}

int main(){

    int n, ocorrencia[6];

    printf("Digite o tamanho da sequencia:\n");
    scanf("%d", &n);

    int sequencia[n];

    printf("Digite a sequencia de numeros:\n");

    for (int i=0; i<n; i++){scanf("%d", &sequencia[i]);}


    for(int i=1; i<=6; i++){
        ocorrencia[i-1] = ocorrencia_vet(sequencia, n, i);
    }


    for (int i=1; i<=6; i++){
        printf("Face %d ocorreu %d vezes\n", i, ocorrencia[i-1]);
    }

    return 0;
}
