#include <stdio.h>

/*Faça um Programa que peça a temperatura em graus Celsius,
transforme e mostre em graus Farenheit.*/

int main() {
  float c, f;

  printf("Entre com a temperatura em Celsius: \n");
  scanf("%f", &c);
  f = 32+1.8*c;
  printf("A temperatura em Farenheit é: %f\n", f);

  return 0;
}
