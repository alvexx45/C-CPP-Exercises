#include <stdio.h>

int main() {
  int n1, n2;

  printf("Primeiro número: ");
  scanf("%i", &n1);
  printf("\nSegundo número: ");
  scanf("%i", &n2);

  if (n1 > n2) {
    printf("\nO maior número digitado foi %i", n1);
  } else {
    printf("\nO maior número digitado foi %i", n2);
  }

  return 0;
}