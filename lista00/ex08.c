#include <stdio.h>

int main() {

  double a, b, temp;
  
  printf("\nDigite o valor de A: ");
  scanf("%lf", &a);

  printf("\nDigite o valor de B: ");
  scanf("%lf", &b);

  // Troca de valores usando uma variável temporária (temp)
  
  temp = a;
  a = b;
  b = temp;

  printf("\nValores trocados: ");
  printf("\nA: %.2lf", a);
  printf("\nB: %.2lf", b);
  
  return 0;
}