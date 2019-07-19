#include <stdio.h>

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
  return 0;
}
