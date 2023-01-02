#include <stdio.h>
#include <stdlib.h>

int main(void){

    printf("Digite o numero p\n");
    int p;

    scanf("%d", &p);
    printf("\n");

    int num = 1;
    int impar = 1;
    int soma = 0;

    while (num<=p){

        printf("%d*%d*%d --> ", num, num, num);

        for (int i=1; i<=num; i++){

            printf("%d ", impar);
            soma = soma+impar;
            impar = impar+2;


        }

        printf("== %d", soma);

        soma = 0;

        printf("\n");

        num++;

    }

}
