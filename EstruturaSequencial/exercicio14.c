#include <stdio.h>

<<<<<<< HEAD
/*João Papo-de-Pescador, homem de bem, comprou um microcomputador para
controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso
de peixes maior que o estabelecido pelo regulamento de pesca do estado de
São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente.
João precisa que você faça um programa que leia a variável peso (peso de peixes)
e calcule o excesso. Gravar na variável excesso a quantidade de quilos além
do limite e na variável multa o valor da multa que João deverá pagar. Imprima
os dados do programa com as mensagens adequadas..*/


int main() {

/*Variavéis*/
  float peso, excesso, multa;

/*Dados de entrada*/
  printf("Entre com a quantidade de quilos de peixe: \n");
  scanf("%f", &peso);

/*Estrutura de decisão*/
  if (peso > 50)
  {
    excesso = peso - 50;
    multa = 4.00 * excesso;
    printf("O total do peso foi: %f\n", peso);
    printf("O excesso foi: %f\n", excesso);
    printf("O valor da multa foi R$:%f\n", multa);
  }
  else
  {
    printf("Você está no peso estabelecido pelo estado!\n");
  }
=======
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

>>>>>>> 98e2b82f6d19c7188fdd23687eb201f31c81188e
  return 0;
}
