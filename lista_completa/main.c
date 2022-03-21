/*Faça um programa que escreva o seu nome na tela.*/
#include <stdio.h>
#include <stdlib.h>

main()
{
    char nome[61];
    printf("Digite seu nome: ");
    scanf("%s",nome);
    printf("O nome armazenado foi: %s", nome);
}
/*Crie um programa que imprima o produto de 28 e 43.*/
#include <stdio.h>
#include <stdlib.h>

main()
{
int x=28, y=43, z;
z=x+y;
printf("O produto entre 28 e 43:  %d",z);
getch();
}
/*Crie um programa que imprima a média aritmética entre os números 8, 9 e 7.*/
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

/*Faça um programa que leia dois inteiros e os imprime na tela.*/
#include <stdio.h>
#include <stdlib.h>

main(){
 int numero1, numero2;
 printf("Informe o primeiro numero: ");
 scanf("%d",&numero1);
 printf("Informe o segundo numero: ");
 scanf("%d",&numero2);
 printf("\nOs numeros informados %d %d ", numero1, numero2);
 system("PAUSE");
 return 0;
}

/*Faça um programa que leia um número e imprima seu sucessor e antecessor.*/
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
/*Ler dois números inteiros e imprimir a soma deles.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 float numero1, numero2;
 printf("Informe o primeiro numero: ");
 scanf("%f",&numero1);
 printf("Informe o segundo numero: ");
 scanf("%f",&numero2);
 if ((numero1 + numero2) > 10)
 printf("\nA soma dos numeros informados e %3.2f\n\n", numero1 + numero2);
 system("PAUSE");
 return 0;
}

int main( )
{
    int h, i, k;
    h = 2;
    i = 4;
    k = (h + i);
    printf(" O valor da soma:  %d ", k);
    return 0;
}
/*Ler um número real e imprimir a terça parte dele.*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
   double entrada, terceiraParte;
   printf ("Digite um numero: \n");

   scanf ("%lf", &entrada);

   terceiraParte = entrada * 1/3.0;
   printf ("A terceira parte de %lf eh: \n %lf\n",  entrada, terceiraParte);

   return 0;
}
/*Ler dois números reais e imprimir a média aritmética deles.*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int h, i, k;
    h = 25;
    i = 12;
    k = (h + i) / 2.0;
    printf(" O valor da media:  %d ", k);
}
/*Faça um programa que você entra com o saldo de uma aplicação e o sistema calcula e imprime o novo saldo para um rendimento de 3,5%.*/
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
/*Sabendo que o perímetro de um círculo é calculado pela fórmula: 2 × 𝜋 × 𝑟𝑎𝑖𝑜, e a área pela fórmula 𝜋 × 𝑟𝑎𝑖𝑜2, faça um programa que dado o raio de um círculo ele calcule o perímetro e a área deste*/
#include <stdio.h>
#include <stdlib.h>

float raio,area;
 main()
 {
 printf("Digite o valor do Raio:  ");
 scanf("%f",&raio);
 area=(3.14*raio*raio);
 printf("A area da circuferencia e %.2f",area);
 getch();
 }
/*Sabendo que 100 quilowatts de energia custa um sétimo de um salário mínimo, faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts gasta em uma residência e imprima: ▪ O valor em Reais do quilowatt ▪ O valor em Reais a
ser pago ▪ O valor a ser pago com 10% de desconto*/
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

/*Faça um programa que entre com o valor de um produto e uma porcentagem de desconto e imprima o valor com desconto*/
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

/*Escreva um programa em C que solicite um determinado número de segundos e, em seguida, imprima quantas horas, minutos e segundos ele representa.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int segundos, h, m, s, resto;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segundos);

    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;
    printf("%d:%d:%d\n", h, m, s);

    return 0;
}

/*Faça um programa que efetue o cálculo de salário líquido de um professor. O programa deve pedir a quantidade de aulas dadas, o valor de hora aula e o percentual de desconto do INSS.*/
#include <stdio.h>
#include <stdlib.h>

float vl_hora, n_hora_tb, des_inss, sal_b, sal_l;
main()
{
printf("Digite o Valor da Hora= ");
scanf("%f",& vl_hora);
printf("Digite a quantidade de aulas dadas= ");
scanf("%f",& n_hora_tb);
printf("Digite o Desconto do INSS= ");
scanf("%f",& des_inss);
sal_b=(vl_hora*n_hora_tb);
sal_l=(sal_b - sal_l * des_inss);
printf("O salario liquido e = %.2f", sal_l);
getch();
}

/*Para se calcular o volume de um cilindro usamos a seguinte fórmula: 𝜋 × 𝑟𝑎𝑖𝑜2 × 𝑎𝑙𝑡𝑢𝑟𝑎, faça um programa que dado a altura de uma lata e seu raio, calcule seu volume.*/
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

/*Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, sabendo-se que o carro faz 12km por litro. Deverão ser fornecidos o tempo gasto na viagem e a velocidade média. ▪ Distância = 𝑡𝑒𝑚𝑝𝑜 × 𝑣𝑒𝑙𝑜𝑐𝑖𝑑𝑎𝑑𝑒 ▪ Litros = 𝑑𝑖𝑠𝑡â𝑛𝑐𝑖𝑎 ÷ 12*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float distancia,
          tempo,         // Tempo gasto na viagem
          velocidade,    // Velocidade m�dia
          litros_usados; // Quantide de litros utilizada

    // Entrada de dados
    printf("TEMPO GASTO = "); scanf("%f", &tempo);
    printf("VELOCIDADE  = "); scanf("%f", &velocidade);

    // Processamento de dados
    distancia = tempo * velocidade;
    litros_usados = distancia / 12;

    // Saida de dados
    system("clear"); // Comando Linux; caso seja Windows, utilize "cls";
    printf("VELOCIDADE MEDIA = %10.2f Km/h \n", velocidade);
    printf("TEMPO GASTO      = %10.2f h \n", tempo);
    printf("DISTANCIA        = %10.2f Km \n", distancia);
    printf("LITROS USADOS    = %10.2f litros \n", litros_usados);

    return(0);
}

/*Efetuar o cálculo de uma prestação em atraso usando a seguinte fórmula: 𝑝𝑟𝑒𝑠𝑡𝑎çã𝑜 = 𝑣𝑎𝑙𝑜𝑟 + (𝑣𝑎𝑙𝑜𝑟 × 𝑡𝑎𝑥𝑎/100 × 𝑡𝑒𝑚𝑝o)*/
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

/*Leia dois valores para as variáveis A e B, efetuar a troca dos valores de forma que A passe a ter o valor de B e B passe a ter o valor de A.*/
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

/*Faça um programa que leia o numerador e o denominador de uma fração e calcule seu valor decimal.*/
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

/*Um restaurante cobra de seus clientes 10% da conta como gorjeta para o garçom. Faça um programa que receba o valor dos gastos, calcule a gorjeta e mostre na tela o valor inicial, a gorjeta e o valor total da conta.*/
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

