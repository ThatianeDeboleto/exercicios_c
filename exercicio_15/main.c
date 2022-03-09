#include <stdio.h>
#include <stdlib.h>

main(){
	printf("\nInforme a altura da lata: ");
	float vAltura;
	scanf("%f", &vAltura);

	printf("\nInforme o raio da circunferencia da lata: ");
	float vRaio;
	scanf("%f", &vRaio);

	float vVolume = 3.14 * (vRaio * vRaio) * vAltura;

	printf("\nO volume da lata: %-7.2f", (vVolume));

	printf("\n\n");
	system("pause");
}
