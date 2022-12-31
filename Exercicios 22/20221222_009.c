#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, x=1, y=1, valor;
    int maior_x=0, maior_y=0, maior_valor=0;


    printf("Digite o valor de n: \n ");
    scanf ("%d", &n);
    printf("Digite o valor de m: \n ");
    scanf ("%d", &m);

    for (x=1; x<=m; x++) {
        for (y=1; y<=n;y++) {
            valor = (x*y)-(x*x)+y;

            if (valor > maior_valor) {
            maior_valor = valor;
            maior_x = x;
            maior_y = y;
        }
        }
        }

printf("valor de x = %d \n", maior_x);
printf("valor de y = %d \n", maior_y);


  return 0;
}
