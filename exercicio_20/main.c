#include <stdio.h>
#include <stdlib.h>

int main(void){

float dividendo = 1, resultado = 0;

for (float divisor = 1; dividendo <= 50; dividendo++, divisor + 2){
   resultado += dividendo/divisor;
}

printf("%f", resultado);

return 0;
}


/*Fa�a um programa que leia o numerador e o denominador de uma fra��o e calcule seu valor decimal*/
