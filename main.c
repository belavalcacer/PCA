#include <stdio.h>
#include <stdlib.h>

int main()
{
   float base, altura, area;

   printf ("\nDigite a base: ");
   scanf ("%f", &base);

   printf ("\nDigite a altura: ");
   scanf ("%f", &altura);

   area = (base*altura)/2;
   printf("A area do triangulo e: %.2f", area);
   return 0;

}
