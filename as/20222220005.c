#include <stdio.h>

int main(){
	
	int a, i, maior=0, menor=0;
	
	for (i=0; i<5; i++){
		printf("Digite um numero: \n");
		scanf("%d", &a);
		
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
	
	printf("Maior numero: %d\n", maior);
	printf("Menor numero: %d\n", menor);
	
}
