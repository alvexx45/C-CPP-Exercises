#include <stdio.h>

int main() {

  float num, den, dec;

  printf("\nInforme o numerador: ");
  scanf("%f", &num);
  printf("\nInforme o denominador: ");
  scanf("%f", &den);

  dec = num / den;

  printf("\nO valor em decimal é: %.2f", dec);
  
  return 0;
}