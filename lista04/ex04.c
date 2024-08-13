#include <stdio.h>

int resto(numerador, denominador) {

  if (numerador < denominador) {
    return numerador;
  } else {
    return resto(numerador - denominador, denominador);
  }
  
}

int main() {

  int num, den;

  printf("Digite o numerador: ");
  scanf("%d", &num);
  printf("Digite o denominador: ");
  scanf("%d", &den);

  int res = resto(num, den);

  printf("O resultado do resto de %d por %d é: %d\n", num, den, res);
  
  return 0;
}