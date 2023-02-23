#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char goleiro [3][50] = {"Hugo Souza", "Matheus Cunha", "Santos"};
    char defesa[8][50] = {"Rodrigo Caio", "Leo Pereira", "David Luiz",
    "Cleiton", "Fabricio Bruno", "Pablo", "Varela"};
    char medio_campo [8][50] = {"Arturo Vidal", "Thiago Maia", "Erick",
    "Gerson", "Everton Ribeiro", "Arrascaeta", "Victor Hugo",
    "Matheus Franca"};
    char atacante [5][50] = {"Gabi", "Bruno Henrique", "Pedro",
    "Marinho", "Everton"};
    char formacao [11][50];
    printf("Formacao com os melhores de cada posicao: \n");


    int notasg [3] = {7, 8, 9};
    int notasd [7] = {7, 6, 9, 7, 8, 6, 9};
    int notasmc [8] = {6, 7, 8, 7, 9, 7, 8, 9};
    int notasat [5] = {7, 6, 8, 9, 7};

    int i, maior=0, aux, indice, j;
    char auxc [50];
    for (i=1; i<3; i++){
        if (notasg[i] > notasg[maior]){
            maior = i;
        }
    }
    strcpy(formacao[0], goleiro[maior]);
    printf("Goleiro: %s \n", formacao[0]);

    for(i=0; i<7; i++) {
        maior = i;
        indice = notasd[i];
        for(j=i+1; j<7;j++) {
            if(notasd[j] > indice){
                indice = notasd[j];
                maior = j;
            }
        }
        if (maior != i) {
            aux = notasd[i];
            notasd[i] = notasd[maior];
            notasd[maior] = aux;
            strcpy(auxc, defesa[i]);
            strcpy(defesa[i], defesa[maior]);
            strcpy(defesa[maior], auxc);
        }
    }

    ////Melhor meio campo
    for(i=0; i<8; i++) {
        maior = i;
        indice = notasmc[i];
        for(j=i+1; j<8;j++) {
            if(notasmc[j] > indice){
                indice = notasmc[j];
                maior = j;
            }
        }
        if (maior != i) {
            aux = notasmc[i];
            notasmc[i] = notasmc[maior];
            notasmc[maior] = aux;
            strcpy(auxc, medio_campo[i]);
            strcpy(medio_campo[i], medio_campo[maior]);
            strcpy(medio_campo[maior], auxc);
        }
    }

    ////Melhor atacante
    for(i=0; i<5; i++) {
        maior = i;
        indice = notasat[i];
        for(j=i+1; j<5;j++) {
            if(notasat[j] > indice){
                indice = notasat[j];
                maior = j;
            }
        }
        if (maior != i) {
            aux = notasat[i];
            notasat[i] = notasat[maior];
            notasat[maior] = aux;
            strcpy(auxc, atacante[i]);
            strcpy(atacante[i], atacante[maior]);
            strcpy(atacante[maior], auxc);
        }
    }

    for(i=0; i<4; i++){
        strcpy(formacao[i+1], defesa[i]);
        printf("Defesas: %s \n", formacao[i+1]);
    }
    for(i=0; i<4; i++){
        strcpy(formacao[i+5], medio_campo[i]);
        printf("Meias: %s \n", formacao[i+5]);
    }
    for(i=0; i<2; i++){
        strcpy(formacao[i+9], atacante[i]);
        printf("Atacantes: %s \n", formacao[i+9]);
    }



    return 0;


}
