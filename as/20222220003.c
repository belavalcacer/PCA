#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, acm=0, i;

    for (i=0; i<5; i++) {
    	printf("Digite os 50 numeros:  \n");
    	scanf("%d", &a); 
    	
    	if (a%2 != 0 && a<200 && a>100) {
    		acm += a;
    	}
    	
    }
    printf("Soma dos numeros impares: %d \n", acm);

    return 0;
	}

