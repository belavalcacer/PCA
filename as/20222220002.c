#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b;

    printf("Digite os 50 numeros:  \n");
    scanf("%d", &a); scanf("%d", &b);

    if (b%2 != 0) {
    a = a+b;
    }


    for (int i=0; i<48; i=i+1) {
    scanf("%d", &b);

    if (b%2 != 0) {
    a = a+b;
    }
    }
    printf("Soma dos numeros impares: %d \n", a);

    return 0;
}
