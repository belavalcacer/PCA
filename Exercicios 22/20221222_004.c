#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
#include <locale.h>

int main() {

 int num, i, qtde_divisores = 0;

 printf("Digite um numero: ");
 scanf("%d", &num);

 for (i = 2; i <= num/2; i++) {
    if (num % i == 0) {
       qtde_divisores += num;
    }
    }

    if (qtde_divisores != 0)
    printf("O numero %d nao eh primo!\n", num);
    else
    printf("O numero %d eh primo!\n", num);
}
