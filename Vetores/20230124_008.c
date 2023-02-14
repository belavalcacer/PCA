#include <stdio.h>
#include <stdlib.h>

void produto_escalar(int n, int sequencia1[], int sequencia2[], int esc[]){
    for(int i=0; i<n; i++){esc[i] = sequencia1[i]*sequencia2[i];}
}

int main(){

    int n, ocorrencia[6];

    printf("Você está prestes a fazer um produto escalar de 2 sequencias de numeros\n");
    printf("Tenha em mente que, para tanto, as 2 sequencias precisam ter o mesmo tamanho.\n");
    printf("Digite o tamanho das sequencias:\n");
    scanf("%d", &n);

    int sequencia1[n], sequencia2[n], esc[n];

    printf("Digite a primeira sequencia de numeros:\n");
    for (int i=0; i<n; i++){scanf("%d", &sequencia1[i]);}

    printf("Digite a segunda sequencia de numeros:\n");
    for (int i = 0; i<n; i++){scanf("%d", &sequencia2[i]);}

    produto_escalar(n, sequencia1, sequencia2, esc);

    for(int i=0; i<n; i++){printf("%dx%d = %d\n",sequencia1[i], sequencia2[i], esc[i]);}

    return 0;
}
