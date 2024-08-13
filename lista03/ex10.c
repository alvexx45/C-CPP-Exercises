#include <stdio.h>

char idadeNadador(int i) {
  
  if (i >= 5 && i <= 7) {
    return 'F';
  } else if (i <= 10) {
    return 'E';
  } else if (i <= 13) {
    return 'D';
  } else if (i <= 15) {
    return 'C';
  } else if (i <= 17) {
    return 'B';
  } else {
    return 'A';
  }

}

int main() {
  int idade;

  printf("Digite a idade do nadador: ");
  scanf("%d", &idade);
  while (idade < 5) {
    printf("Idade inválida. Digite novamente: ");
    scanf("%d", &idade);
  }

  printf("A categoria do nadador com idade %d é: %c", idade, idadeNadador(idade));
  
  return 0;
}