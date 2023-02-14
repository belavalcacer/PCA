#include <stdio.h>
#include <stdlib.h>

int Intervalo (){

    int x;
    printf("Digite um valor entre o e 1000\n");
    scanf("%d", &x);

    while ((x < 0) || (x > 1000)){

        printf("This isn't a valid value\n");
        printf("Type again");
        scanf("%d", &x);

    }

    return x;

}

float porcentagem(int x, int y){

    float percentual;

    if (x > y){

        percentual = y*100/x;

    }

    else{

        percentual = x*100/y;

    }

    return percentual;

}

float absdif(float x, float y){

    float modulo;

    if (x > y){

        modulo = x - y;

    }

    else{

        modulo = y - x;

    }

    return modulo;

}

int main(){

    int x = Intervalo();
    int y = Intervalo();

    printf("Percentual do menor em realacao ao maior: %f\n", porcentagem(x, y));
    printf("O modulo da diferenca entre o maior e o menor: %f\n", absdif(x, y));

}
