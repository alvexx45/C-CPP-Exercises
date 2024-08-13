#include <stdio.h>

int main() {
  int n;

  printf("Informe sua nota: ");
  scanf("%i", &n);
  
  while (n > 10) {
    printf("\nNota inválida\nInforme novamente: ");
    scanf("%i", &n);
  }

  switch (n) {
    case 10:
    case 9:
    case 8:
      printf("Ótimo");
      break;
    case 7:
      printf("Bom");
      break;
    case 6:
    case 5:
      printf("Regular");
      break;
    default:
      printf("Insatisfatório");
  }
  
  return 0;
}