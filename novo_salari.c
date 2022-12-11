#include <stdio.h>
#include <stdlib.h>

int main()
{
float salario, ajuste;

printf("Digite seu salario: ");
scanf("%f", &salario);

ajuste = salario + (salario*0.10);
printf("Seu novo salario: %.2f", ajuste);

return 0;
}

