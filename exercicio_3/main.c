#include <stdio.h>
#include <stdlib.h>

int main( )
{
    int h, i, j, k;
    h = 8;
    i = 9;
    j = 7;
    k = (h + i + j);
    printf(" O valor da soma:  %d ", k);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
int n1, n2, n3;
int soma;
printf( "Entre com 3 numeros inteiros: ");
scanf( "%d %d %d",&n1, &n2, &n3);
soma = n1 + n2 + n3;
printf( "Soma = %d\n", soma );
printf( "Media = %8.2f\n", soma / 3.0 );
printf( "Produto = %d\n", n1 * n2 * n3 );
}
