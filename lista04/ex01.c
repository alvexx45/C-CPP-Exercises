#include <stdio.h>

int contarDigitos(int numero) {

  if (numero < 10) {
    return 1;
  }

  return 1 + contarDigitos(numero / 10);
}

int main() {
  int num;
  
  printf("Digite um número: ");
  scanf("%d", &num);

  int digitos = contarDigitos(num);

  printf("O número %d possui %d dígitos.", num, digitos);
  
  return 0;
}