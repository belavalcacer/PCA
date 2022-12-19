#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_horas, salario_liquido, salario_bruto, imp_renda, inss, sindicato, descontos;
    int horas_trabalho;
    printf("Valor do salario em horas: \n"); scanf("%f", &salario_horas);
    printf("Horas trabalhadas no mes: \n"); scanf("%d", &horas_trabalho);

    salario_liquido = salario_horas*horas_trabalho;
    imp_renda = salario_liquido*0.11;
    inss = salario_liquido*0.08;
    sindicato = salario_liquido*0.05;
    descontos = imp_renda + inss + sindicato;

    salario_bruto = salario_liquido - descontos;

    printf("Salario Bruto: %.2f", salario_bruto);



    return 0;
}
