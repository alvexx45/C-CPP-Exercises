#include <stdio.h>
#include <math.h>

int main() {

  int primTermo, razao, quiTermo;
  
  printf("Digite o primeiro termo da PG: ");
  scanf("%d", &primTermo);
  printf("\nDigite a razão da PG: ");
  scanf("%d", &razao);

  quiTermo = primTermo * pow(razao, (5 - 1));

  printf("\nO quinto termo da PG é: %d", quiTermo);
  
  return 0;
}