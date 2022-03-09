#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float preco, desc, end;
    printf("Qual o valor da compra? ");
    scanf("%f", &preco);

    printf("Qual o valor do desconto? ");
    scanf("%f", &desc);

    end = preco - ( preco * desc / 100 );
    printf("O valor final e: %f", end);
}
