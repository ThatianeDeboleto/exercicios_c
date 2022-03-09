#include <stdio.h>
#include <stdlib.h>

int main()
{
 float SM, kwgasto, umkw;
 printf("Informe o valor do salario minimo: ");
 scanf("%f",&SM);
 printf("\n\nInforme total Kw gasto na residencia: ");
 scanf("%f",&kwgasto);
 umkw = SM/7/100;
 printf("\n\nO valor de 1 Kw e: %3.2f\n\n",umkw);
 printf("\nO valor a ser pago pela residencia e: %4.2f",kwgasto * umkw);
 printf("\n\nNovo valor a ser pago com desconto de 10%% e: %3.2f\n\n",(kwgasto * umkw) * 0.90);
 system("PAUSE");
 return 0;
}
