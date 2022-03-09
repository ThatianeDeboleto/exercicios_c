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
