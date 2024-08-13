#include <stdio.h>

int main() {
  float slr;
  char opcao;

  printf("Escolha uma opção (A, B, C): ");
  scanf(" %c", &opcao);
  while (opcao != 'A' && opcao != 'B' && opcao != 'C') {
    printf("\nOpção inválida.\nEscolha novamente (A, B, C): ");
    scanf(" %c", &opcao);
  }
  printf("\nDigite o salário: ");
  scanf("%f", &slr);

  switch (opcao) {
    case 'A':
    slr = slr * 0.08 + slr;
    break;
    case 'B':
    slr = slr * 0.11 + slr;
    break;
    default:
      if (slr <= 1000) {
        slr = slr + 350;  
      } else {
        slr = slr + 200;
      }
  }
  printf("\nNovo salário: %.2f", slr);
  
  return 0;
}