#include <stdio.h>

int main(){

	float a, i, maior=0, menor=0;

	for (i=0; i<15; i++){
		printf("Digite um numero: \n");
		scanf("%f", &a);

		if (a>0) {

		if (a>maior) {
			maior = a;
		}
		if (a<menor) {
			menor = a;
		}
		if (i==0){
			menor = a;
		}

		}
		else {
			printf("Digite apenas numeros positivos");
		}
	}

	printf("Maior numero: %.1f\n", maior);
	printf("Menor numero: %.1f\n", menor);

}
