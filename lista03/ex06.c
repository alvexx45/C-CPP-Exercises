#include <stdio.h>

float calcularS(int n) {
  float s = 1.0;
  float fat = 1.0;

  for (int i = 1; i <= n; i++) {
    fat *= i;
    s += 1.0 / fat;
  }

  return s;
}

int main() {
  int n;
  printf("Digite um valor inteiro e positivo para n: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("O valor de N deve ser positivo.\n");
    return 1;
  }

  float res = calcularS(n);
  printf("O valor de S é: %.6f\n", res);
  
  return 0;
}