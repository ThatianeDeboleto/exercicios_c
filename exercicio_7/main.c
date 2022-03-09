#include <stdio.h>
#include <stdlib.h>

int main (void) {
   double entrada, terceiraParte;
   printf ("Digite um numero: \n");

   scanf ("%lf", &entrada);

   terceiraParte = entrada * 1/3.0;
   printf ("A terceira parte de %lf eh: \n %lf\n",  entrada, terceiraParte);

   return 0;
}
