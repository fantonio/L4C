#include <stdio.h>

/*Faça um Programa que peça a temperatura em graus Farenheit,
transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).*/

int main(int argc, char const *argv[]) {
  int f, c;
  printf("*******************************************************\n");
  printf("*** Conversor de temperatura Farenheit para Celsius ***\n");
  printf("*******************************************************\n\n");
  printf("Entre com a temperatura a ser convertidade: \n");
  scanf("%d", &f);
  c = (5 * (f-32) /9);
  printf("A temperatura em Celsius é: %d \n", c);
  return 0;
}
