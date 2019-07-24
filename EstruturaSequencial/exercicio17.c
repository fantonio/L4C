#include <stdio.h>

/*Faça um Programa para uma loja de tintas. O programa deverá pedir o tamanho
em metros quadrados da área a ser pintada. Considere que a cobertura da tinta
é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de
18 litros, que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00.
Informe ao usuário as quantidades de tinta a serem compradas e os respectivos
preços em 3 situações:

a. comprar apenas latas de 18 litros;
b. comprar apenas galões de 3,6 litros;
c. misturar latas e galões, de forma que o preço seja o menor. Acrescente 10% de
folga e sempre arredonde os valores para cima, isto é,considere latas cheias..*/

int main() {
/*Variavéis*/
  int tamanho, valor1, valor2, valor;
  float qtd1, qtd2;

  printf("*******************************************************\n");
  printf("***     SISTEMA DE GESTÃO PARA LOJA DE TINTAS       ***\n");
  printf("*******************************************************\n\n");
  printf("Qual a opção de compra:.\n");
  printf("Digite: \n(1) Comprar apenas latas de 18 litros \n(2) Comprar apenas galões de 3,6 litros \n(3) Comprar latas misturadas\n");
  scanf("%d", &valor);

  switch (valor) {
    case 1:
    printf("Comprar apenas latas de 18 litros!\n");
    printf("Entre com o tamanho em metros quadrados da área a ser pintada: \n");
    scanf("%d", &tamanho);
    qtd1 = (tamanho / 6)/108;
    valor1 = qtd1 *80;
    printf("A quantidade de latas de tinta é: %f\n", qtd1);
    printf("O valor a ser pago é: %d reais\n ", valor1);
    break;

    case 2:
    printf("Comprar apenas galões de 3,6 litros!\n");
    printf("Entre com o tamanho em metros quadrados da área a ser pintada: \n");
    scanf("%d", &tamanho);
    qtd2 = (tamanho / 3.5)/21;
    valor2 = qtd2 *25;
    printf("A quantidade de galões de tinta é: %f\n", qtd2);
    printf("O valor a ser pago é: %d reais\n", valor2);
    break;

    case 3:
    printf("Comprar latas misturadas!\n");
    printf("Entre com o tamanho em metros quadrados da área a ser pintada: \n");
    scanf("%d", &tamanho);
    printf("Em CONSTRUÇÃO!!!\n");
    break;
  }
  return 0;
}
