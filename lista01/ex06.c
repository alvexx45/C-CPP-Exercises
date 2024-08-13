#include <stdio.h>

int main(void) {
  float a, b, x;

  printf("Digite o coeficiente A: ");
  scanf("%f", &a);
  while (a == 0) {
    printf("A equação não é do primeiro grau. A não pode ser igual a 0\nDigite novamente: ");
    scanf("%f", &a);
  }
  printf("Digite o coeficiente B: ");
  scanf("%f", &b);

    x = -b / a;

  printf("A raiz da equação é x = %.2f", x);
  
  return 0;
}