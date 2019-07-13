#include <stdio.h>

int main() {
  int a, b, c;

  printf("Entre com o primeiro número: \n");
  scanf("%d", &a);
  printf("Entre com o segundo número: \n");
  scanf("%d", &b);
  c = a + b;
  printf("O valor da soma é: %d\n", c);

  return 0;
}
