#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	float y, x1, xi, xn, e=0.1;

	printf("Digite um numero positivo: ");
	scanf("%f", &y);

	x1 = y/2;
	xi = x1;
	xn = xi - ((pow(xi,2)-y)/(2*xi));

	if (y<0){
        printf("Digite apenas numeros positivos!");
	}

	do {
        xi = xn;
		xn = xi - ((pow(xi,2)-y)/(2*xi));
	}
	while (fabs(xn-xi)>=e);

	printf("Raiz quadrada obtida por Newton-Raphson: %.1f\n", xn);
	printf("Raiz quadrada obtida por sqrt: %.1f", sqrt(y));
}
