#include <stdio.h>

int main(void) {
  int anoNasc, idade;
  char aniv;

  printf("Digite o ano de nascimento: ");
  scanf("%i", &anoNasc);
  while (anoNasc > 2024) {
    printf("\nAno inválido\nDigite novamente: ");
    scanf("%i", &anoNasc);
  }
  printf("\nVocê já fez aniversário esse ano? (Responda com S ou N): ");
  scanf(" %c", &aniv);
  while (aniv != 'S' && aniv != 'N') {
    printf("\nValor inválido\nDigite novamente: ");
    scanf(" %c", &aniv);
  }

  if (aniv == 'S') {
    idade = 2024 - anoNasc;
  } else {
    idade = 2024 - 1 - anoNasc;
  }
  printf("\nSua idade é: %i", idade);
  if (idade >= 18) {
    printf("\nPode dirigir");
  } else {
    printf("\nNão pode dirigir");
  }
  
  return 0;
}