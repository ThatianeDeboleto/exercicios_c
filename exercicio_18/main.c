#include <stdio.h>
#include <stdlib.h>

main(){
	printf("\nInforme o valor de X: ");
	int X;
	scanf("%d", &X);

	printf("\nInforme o valor de Y: ");
	int Y;
	scanf("%d", &Y);

	int vAux = X;
	X = Y;
	Y = vAux;

	printf("\n O valor de X: %d ", X);
	printf("\n O valor de Y: %d ", Y);

	printf("\n\n");
	system("pause");
}
