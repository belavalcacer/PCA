#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int peso_semanas (char option[7]){

    int aux;

    if (!(strcmp(option, "Peso"))){

        printf("Digite o peso:\n");
        scanf("%d", &aux);
        return aux;

    }

    else{

        printf("Digite a quantidade de semanas:\n");
        scanf("%d", &aux);
        return aux;

    }

}

void parto(int peso, int semanas){

    if ((peso < 100)||(semanas < 28)){printf("Parto não deverá ser realizado, reavaliar clinicamente");}

    else{

        int meses = (semanas - (semanas%4))/4;

        if ((peso > 2500) && (meses > 7)){printf("Parto normal");}

        else{

            if((peso >= 1500) && (peso <= 2000) && (meses > 9)){printf("Parto normal");}

            else{printf("Parto Cesariana");}
        }

    }

}

int main (){

    int peso = peso_semanas("Peso");
    int semanas = peso_semanas("Weeks");

    parto(peso, semanas);

    return 0;

}
