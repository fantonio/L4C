#include <stdio.h>

/* Programa para fazer a conversão de metros para centímetro */

int main() {
  int a, resultado;

  printf("Entre com o valor do metro: \n");
  scanf("%d", &a);
  resultado = a * 100;
  printf("O valor em centímetro é: %dcm\n", resultado);

  return 0;
}
