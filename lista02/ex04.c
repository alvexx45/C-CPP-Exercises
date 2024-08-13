#include <stdio.h>

int main() {
  int n;
  double e = 1.0, f = 1.0;

  printf("Digite um número inteiro e positivo: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    f *= i;
    e += 1 / f;
  }

  printf ("O valor de E é: %.6lf\n", e);
  
  return 0;
}