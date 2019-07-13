#include <stdio.h>

int main() {
  int a, b, c, d, media;

  printf("Entre com a nota do primeiro bimestre: \n");
  scanf("%d", &a);
  printf("Entre com a nota do segundo bimestre: \n");
  scanf("%d", &b);
  printf("Entre com a nota do terceiro bimestre:\n");
  scanf("%d", &c);
  printf("Entre com a nota do quarto bimestre\n");
  scanf("%d", &d);
  media = (a + b + c + d)/4;
  printf("A média final é: %d\n", media);
  return 0;
}
