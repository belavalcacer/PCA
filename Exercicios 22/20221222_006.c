#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, soma=0;

    printf("Digite o numero: \n");
    scanf("%d", &num);

    for (i=1; i<num; i++) {
        if (num%i == 0) {
            soma += i;
    }
    }

    if (num != soma && num>0){
    printf("O numero %d nao eh perfeito \n", num);
    }
    if (num == soma && num>0) {
    printf("O numero %d eh perfeito \n", num);
    }
    else {
    printf("Digite apenas numeros positivos");
    }

    return 0;
}
