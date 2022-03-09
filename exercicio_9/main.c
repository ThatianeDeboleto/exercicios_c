#include <stdio.h>
#include <stdlib.h>

float saldo, total;
main()
{
printf("Digite o valor do Saldo= ");
scanf("%f",& saldo);
total=(saldo + 0.035*saldo);
printf ("O Rendimento e = %.2f", total);
getch();
}
