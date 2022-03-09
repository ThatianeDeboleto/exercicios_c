#include <stdio.h>
#include <stdlib.h>

int main() {
    // criação das variáveis necessárias
    int numPessoas;
    float valorDespesa, gorjeta, valorTotal, valorPorPessoa;

    // leitura dos dados
    printf("Digite o valor da conta, da gorjeta e a quantidade de pessoas: ");
    scanf("%f%f%d", &valorDespesa, &gorjeta, &numPessoas);

    // cálculos necessários
    valorTotal = valorDespesa * gorjeta/100 + valorDespesa;
    valorPorPessoa = valorTotal / numPessoas;
    printf("Cada um ira pagar R$%.2f\n", valorPorPessoa);
    return 0;
}
