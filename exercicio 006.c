#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_horas, salario;
    int horas_trabalho;
    printf("Valor do salario em horas: \n"); scanf("%f", &salario_horas);
    printf("Horas trabalhadas no mes: \n"); scanf("%d", &horas_trabalho);

    salario = (salario_horas*horas_trabalho);
    printf("Salario total: %.2f", salario);

    return 0;
}
