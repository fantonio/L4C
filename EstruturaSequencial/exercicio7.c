#include <stdio.h>

/*Faça um Programa que calcule a área de um quadrado,
em seguida mostre o dobro desta área para o usuário.*/

int main(){
  int area, lado, dobro_area;
  printf("Entre com o valor do lado do Quadradro: \n");
  scanf("%d", &lado);
  area = lado * lado;
  printf("A área do Quadrado é: %d\n", area);
  dobro_area = area * area;
  printf("O dobro da área do Quadrado é: %d\n", dobro_area);

  return 0;
}
