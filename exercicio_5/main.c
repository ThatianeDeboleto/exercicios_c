#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, antecessor, sucessor;

  printf("Informe um numero inteiro: ");
  scanf("%d", &n);

  antecessor = n - 1;
  sucessor = n + 1;

  printf("\n");
  printf("%d (antecessor)\n", antecessor);
  printf("%d (valor)\n", n);
  printf("%d (sucessor)\n", sucessor);

  return(0);
}
