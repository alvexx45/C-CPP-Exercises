#include <stdio.h>

int main() {
  int a, b;

  printf("Primeiro número: ");
  scanf("%d", &a);
  printf("Segundo número: ");
  scanf("%d", &b);
 
  if (&a > &b) {
    printf("O número %d tem o maior endereço (%p)", a, &a);
  } else if (&b > &a) {
    printf("O número %d tem o maior endereço (%p)", b, &b);
  } else {
    printf("Os endereços tem o mesmo valor (%p)", &a);
  }
  
  return 0;
}