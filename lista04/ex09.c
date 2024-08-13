#include <stdio.h>

int main() {
  int a;
  float b;
  char c;

  printf("Endereço de A: %p\n", &a);
  printf("Conteúdo de A: %d\n", a);
  printf("Endereço de B: %p\n", &b);
  printf("Conteúdo de B: %.2f\n", b);
  printf("Endereço de C: %p\n", &c);
  printf("Conteúdo de C: %c\n", c);
  
  printf("\nNovo valor para A (inteiro), B (real) e C (char): ");
  scanf("%d %f %c", &a, &b, &c);

  printf("\nNovo endereço de A: %p\n", &a);
  printf("Novo conteúdo de A: %d\n", a);
  printf("Novo endereço de B: %p\n", &b);
  printf("Novo conteúdo de B: %.2f\n", b);
  printf("Novo endereço de C: %p\n", &c);
  printf("Novo conteúdo de C: %c\n", c);
  
  return 0;
}