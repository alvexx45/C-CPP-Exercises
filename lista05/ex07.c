#include <stdio.h>

void receba(int x, int y, int *maior, int *menor) {

  if (x > y) {
    *maior = x;
    *menor = y;
  } else {
    *maior = y;
    *menor = x;
  }  
  
}

int main() {
  int n1, n2;
  int maior, menor;

  printf("Informe dois números inteiros: ");
  scanf("%d %d", &n1, &n2);

  receba(n1, n2, &maior, &menor);

  printf("\nMaior: %d\n", maior);
  printf("Menor: %d", menor);
  
  return 0;
}