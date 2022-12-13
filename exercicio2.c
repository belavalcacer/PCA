#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char nome, sexo;

    printf("Digite seu nome: "); scanf("%s", &nome);
    printf("Digite sua idade: "); scanf("%d", &idade);
    printf("Mulher(M) ou Homem(H)? "); scanf("%s", &sexo);
        if (sexo == 'M' || sexo == 'm')
        {
        printf("Eh mulher");
        }
        else
        {
        printf("Nao eh mulher");
        }

    return 0;
}
