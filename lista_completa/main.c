#include <stdio.h>
#include <stdlib.h>

int main() {
    // cria��o das vari�veis necess�rias
    int numPessoas;
    float valorDespesa, gorjeta, valorTotal, valorPorPessoa;

    // leitura dos dados
    printf("Digite o valor da conta, da gorjeta e a quantidade de pessoas: ");
    scanf("%f%f%d", &valorDespesa, &gorjeta, &numPessoas);

    // c�lculos necess�rios
    valorTotal = valorDespesa * gorjeta/100 + valorDespesa;
    valorPorPessoa = valorTotal / numPessoas;
    printf("Cada um ira pagar R$%.2f\n", valorPorPessoa);
    return 0;
}
