#include <stdio.h>

/*Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo
que calcule seu peso ideal, utilizando as seguintes fórmulas:
  a. Para homens: (72.7*h) - 58
  b. Para mulheres: (62.1*h) - 44.7.*/

int main() {
  int valor;
  float altura, peso;

  printf("Qual o seu peso ideal.\n");
  printf("Digite: \n(1) Para Homem \n(2) mulher\n");
  scanf("%d", &valor);

  switch (valor) {
    case 1:
    printf("Sua opção foi Homem!\n");
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    peso = ((72.7 * altura) - 58);
    printf("Seu peso ideal é: %f\n", peso);
    break;

    case 2:
    printf("Sua opção foi Mulher!\n");
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    peso = ((62.1 * altura) - 44.7);
    printf("Seu peso ideal é: %f\n", peso);
    break;
  }
  return 0;
}
