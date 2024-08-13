#include <stdio.h>

int divisao(int numerador, int denominador) {
  
    if (numerador < denominador) {
      return 0;
    } else {
      return 1 + divisao(numerador - denominador, denominador);
    }
}

int main() {
  int num, den;

  printf("Digite o numerador: ");
  scanf("%d", &num);
  printf("Digite o denominador: ");
  scanf("%d", &den);

  int res = divisao(num, den);

  printf("O resultado da divisão de %d por %d é: %d\n", num, den, res);
  
  return 0;
}