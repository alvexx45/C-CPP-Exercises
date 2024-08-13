#include <stdio.h>

int somaDigitos(int num) {

  if (num < 10) {
    return num;
  } else {
    return (num % 10) + somaDigitos(num / 10);
  }
  
}

int main() {
  int numero;

  printf("Digite um número inteiro: ");
  scanf("%d", &numero);

  int soma = somaDigitos(numero);

  printf("A soma dos digitos de %d é %d\n", numero, soma);
  
  return 0;
}