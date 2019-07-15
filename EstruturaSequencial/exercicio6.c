#include <stdio.h>

/* Programa para fazer o calculo da área de um círculo - Formula : Π * r * r*/

int main() {
   float raio, area;

   printf("\nEntre com o raio do circulo: ");
   scanf("%f", &raio);
   area = 3.14 * raio * raio;
   printf("\nArea do circulo : %f", area);

   return (0);
}
