#include <stdio.h>
#include <stdlib.h>

int verifica_correp(int x, int y){

    int corresp = 1;

    if (y > x){return !corresp;}

    else{

        int d, e;

        d = x%10;
        e = y%10;
        x = x/10;
        y = y/10;

        if (d != e){return !corresp;}

        while (y > 0){

            if (d != e){return !corresp;}

            d = x%10;
            e = y%10;
            x = x/10;
            y = y/10;

        }

        return corresp;

    }

}

int segmento(int x, int y){

    int corresp = 0;

    if (y > x){return corresp;}

    else{

        if (verifica_correp(x, y)){return !corresp;}

        else{x = x/10;}

        while(x > 0){

            if (verifica_correp(x, y)){return !corresp;}

            else{

                x = x/10;

            }

        }

        return corresp;

    }

}

int main(){

    int x, y, corresp;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &x);

    printf("Digite um numero: \n");
    scanf("%d", &y);

    corresp = segmento(x, y);

    if (corresp){printf("é um segmento\n");}

    else{printf("não é um segmento\n");}

}
