#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprime(float *inicio, float *final){

    for (float *pvet = inicio; pvet <= final; pvet++){
        printf("%f\n", *pvet);
    }

}

void mediaDesvio(float *vetor, int tam, float *media, float *desvio){

    float soma = 0.0;
    float soma_desvio = 0;

    for (float *pvet = vetor; pvet <= vetor+(tam-1); pvet++){soma += *pvet;}
    *media = soma/tam;

    for (float *pvet = vetor; pvet <= vetor+(tam-1); pvet++){

        soma_desvio += pow((*pvet - *media), 2);

    }

    *desvio = sqrt(soma_desvio/tam);

}

int main(){

    int tam;
    printf("Digite a quantidade de alunos \n");
    scanf("%d", &tam);

    float *notas;
    notas = (float *) malloc (tam * sizeof(float));
    if (notas == NULL){
        printf("Não foi possível alocar memória");
        return -1;
    }
    else{
        printf("Digite as notas dos alunos:\n");

        for (int i = 0; i<tam; i++){
            scanf("%f", notas+i);
        }

        float media, desvio;
        mediaDesvio(notas, tam, &media, &desvio);
        printf("Media da turma: %.2f\n", media);
        printf("Desvio padrao: %.2f\n", desvio);
        free(notas);

        return 0;
    }
}
