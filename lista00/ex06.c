#include <stdio.h>

int main() {

  int primTermo, razao, decTermo;

  printf("Digite o primeiro termo da PA: ");
  scanf("%d", &primTermo);
  printf("\nDigite a razão da PA: ");
  scanf("%d", &razao);

  decTermo = primTermo + (10 - 1) * razao;

  printf("\nO décimo termo da PA é: %d", decTermo);
  
  return 0;
}