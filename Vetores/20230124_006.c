#include <stdio.h>
#include <stdlib.h>

void crescente (int sequencia[], int n){

    int menor, index, aux;

    for (int i=0; i<n; i++){
        menor = sequencia[i];
        index = i;
        for (int j=i+1; j<n; j++){
            if (sequencia[j] < menor){
                menor = sequencia[j];
                index = j;
            }
        }
        if (index != i){
            aux = sequencia[i];
            sequencia[i] = sequencia[index];
            sequencia[index] = aux;
        }
    }

}

int main(){
    int n, ocorrencia[6];

    printf("Digite o tamanho da sequencia:\n");
    scanf("%d", &n);

    int sequencia[n];

    printf("digite a sequencia de numeros:\n");

    for (int i=0; i<n; i++){scanf("%d", &sequencia[i]);}

    crescente(sequencia, n);

    for (int i=0; i<n; i++){printf("%d ", sequencia[i]);}

    return 0;
}
