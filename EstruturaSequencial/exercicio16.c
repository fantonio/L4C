#include <stdio.h>

/*Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho
em metros quadrados da área a ser pintada. Considere que a cobertura da tinta
é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de
18 litros, que custam R$ 80,00. Informe ao usuário a quantidades de latas de
tinta a serem compradas e o preço total..*/

int main() {
/*Variavéis*/
  int tamanho, qtd;
  float valor;

/*Dados de entrada*/
  printf("Entre com o tamanho em metros quadrados da área a ser pintada: \n");
  scanf("%d", &tamanho);

/*Calculos*/
  qtd = (tamanho / 3)/54;
  valor = qtd *80;

/*Dados de saída*/
  printf("A quantidade de latas de tinta é: %d\n", qtd);
  printf("O valor a ser pago é: %f\n", valor);

  return 0;
}
