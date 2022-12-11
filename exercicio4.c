#include <stdio.h>
#include <stdlib.h>

int main()
{
float valor_conta, novo_valor, porcentagem;

printf("Digite o valor da conta: "); scanf("%f", &valor_conta);
printf("Digite a porcentagem do garcom: "); scanf("%d", &porcentagem);

novo_valor = (valor_conta*(porcentagem/100)) + valor_conta;
printf("Total da conta: R$%.2f", novo_valor);

}
