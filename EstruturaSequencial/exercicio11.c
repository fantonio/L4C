#include <stdio.h>
#include <math.h>

/*Faça um Programa que peça 2 números inteiros e um número real.
Calcule e mostre:
a - o produto do dobro do primeiro com metade do segundo .
b - a soma do triplo do primeiro com o terceiro.
c- o terceiro elevado ao cubo.*/

int main() {

  int a,b,r1,r2;
  float c, r3;

  printf("Entre com o primeiro número inteiro: \n");
  scanf("%d", &a);
  printf("Entre com o segundo número inteiro: \n");
  scanf("%d", &b);
  printf("Entre com o número real: \n");
  scanf("%f", &c);
  /*Calculo do roduto do dobro do primeiro com metade do segundo.*/
  r1 = ((a*a)*(b/2));
  /*Calculo da soma do triplo do primeiro com o terceiro.*/
  r2 = ((a*a*a)+c);
  /*Calculo do terceiro elevado ao cubo.*/
  r3 = c*c*c;
  printf("Resposta 1: %d\n", r1);
  printf("Resposta 2: %d\n", r2);
  printf("Resposta 1: %f\n", r3);
  return 0;
}
