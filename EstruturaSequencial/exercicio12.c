#include <stdio.h>

/*Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que
calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58.*/

int main() {
  float altura, peso;
  printf("Entre com sua altura: \n");
  scanf("%f", &altura);
  peso = ((72.7 * altura) - 58);
  printf("Seu peso ideal é: %f\n", peso);
  return 0;
}
