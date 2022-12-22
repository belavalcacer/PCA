#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite os 5 numeros: ");
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    a = a+b;

    for (int i=0; i<3; i=i+1) {
    scanf("%d", &b);
    a = a+b;
    }
    printf("Soma: %d", a);

    return 0;
}

