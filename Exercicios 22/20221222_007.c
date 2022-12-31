#include <stdio.h>
#include <stdlib.h>

int main() {

    float massa_inicial, massa_final;
    int tempo=0, horas, minutos, segundos, segundo=50;

    printf("Digite a massa inicial:\n");
    scanf("%f", &massa_inicial);

    massa_final = massa_inicial;
    do  {
        massa_final = massa_final / 2;
        tempo += segundo;
        }
    while (massa_final >= 0.5);
        printf("Massa Inicial: %.1f gramas \n", massa_inicial);
        printf("Massa Final: %.2f gramas \n", massa_final);

    horas = tempo / 3600;
    minutos = (tempo - horas*3600) / 60;
    segundos = (tempo - minutos*60 - horas*3600);

    printf("Horas: %d\nMinutos: %d\nSegundos: %d", horas, minutos, segundos);

}

