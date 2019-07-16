#include <stdio.h>

/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.*/

int main() {

  float ganho_h, num_h, sal;
  
  printf("Entre com o valor ganho por hora: \n");
  scanf("%f", &ganho_h);
  printf("Entre com o numero de horas trabalhadas no mês: \n");
  scanf("%f", &num_h);
  sal = ganho_h * num_h;
  printf("O seu salário é: %f \n", sal);

  return 0;
}
