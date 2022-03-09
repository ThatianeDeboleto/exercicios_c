#include <stdio.h>
#include <stdlib.h>

main ()
{
float vp,tx,r;
int ta;
printf ("Digite o valor da prestacao: ");
scanf ("%f", & vp);
printf ("Digite o valor da taxa: ");
scanf ("%f", & tx);
printf ("Digite o valor do tempo de atraso: ");
scanf ("%d", & ta);
r=vp+(vp*(tx/100)*ta);
printf ("O valor total e de: %.2f \n", r);
}
