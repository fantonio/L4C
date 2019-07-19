#include <stdio.h>

/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês,
sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e
5% para o sindicato, faça um programa que nos dê:
a. salário bruto.
b. quanto pagou ao INSS.
c. quanto pagou ao sindicato.
d. o salário líquido.
e. calcule os descontos e o salário líquido.*/

/*Variavéis*/
int main() {
  float sal_l, sal_b, valor_h, horas_mes, ir, inss, sindicato, total_desc;

/*Dados de entrada*/
  printf("Entre com o valor que você ganha por hora: \n");
  scanf("%f", &valor_h);
  printf("Entre com o número de horas trabalhadas no mês: \n");
  scanf("%f", &horas_mes);

/*Calculos*/
  sal_b = valor_h * horas_mes;
  ir = (0.11*sal_b);
  inss = (0.08*sal_b);
  sindicato = (0.05*sal_b);
  total_desc = ir + inss + sindicato;
  sal_l = sal_b - total_desc;

/*Dados de saída*/
  printf("Salário Bruto: %f\n", sal_b);
  printf("Valor pago ao INSS: %f\n", inss);
  printf("Valor pago ao Sindicato: %f\n", sindicato);
  printf("Salário Líquido: %f\n", sal_l);

  return 0;
}
