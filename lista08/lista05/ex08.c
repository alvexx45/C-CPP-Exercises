#include <stdio.h>

int receba(int *x, int *y, int *z) {
  int t;

  if (*x > *y) {
    t = *x;
    *x = *y;
    *y = t;
  }
  if (*x > *z) {
    t = *x;
    *x = *z;
    *z = t;
  }
  if (*y > *z) {
    t = *y;
    *y = *z;
    *z = t;
  }


  if (*x == *y || *y == *z) {
    return 1;
  } else {
    return 0;
  }
  
}

int main() {
  int n1, n2, n3;

  printf("Informe 3 valores: ");
  scanf("%d %d %d", &n1, &n2, &n3);

  int res = receba(&n1, &n2, &n3);

  printf("Valores ordenados: %d %d %d", n1, n2, n3);
  printf("\nResultado da comparação: %d", res);

  return 0;
}