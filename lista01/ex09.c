#include <stdio.h>

int main() {
  char s;

  printf("Insira um símbolo do teclado: ");
  scanf(" %c", &s);

  switch (s) {
    case '<':
    printf("\nSINAL DE MENOR");
    break;
    case '>':
    printf("\nSINAL DE MAIOR");
    break;
    case '=':
    printf("\nSINAL DE IGUAL");
    break;
    default:
    printf("\nOUTRO SINAL");
  }
  
  return 0;
}