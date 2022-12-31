#include <stdio.h>
#include <stdlib.h>

int main() {

 float soma=0, dividendo=1, divisor=1;

 do {
    dividendo = dividendo+2;
    divisor = divisor+1;
    soma = soma + (dividendo/divisor);

 }
 while (dividendo <=99);

printf("Soma: %.3f\n", soma);

return 0;
}




