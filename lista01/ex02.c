#include <stdio.h>

int main() {
  int n1, n2, res;

  printf("Primeiro número: ");
  scanf("%i", &n1);
  printf("Segundo número: ");
  scanf("%i", &n2);

  res = n1 + n2;

  if (res >= 10) {
    res = res + 5;
  } else {
    res = res + 7;
  }
  printf("Resultado: %i", res);

  return 0;
}