#include <stdio.h>
#include <math.h>

int main(void) {
  float x, y;

  printf("Valor de X: ");
  scanf("%f", &x);

  if (x <= 1) {
    y = 1;
  } else if (x <= 2) {
    y = 2;
  } else if (x <= 3) {
    y = pow(x, 2);
  } else {
    y = pow(x, 3);
  }
  printf("Valor de Y: %.2f", y);

  return 0;
}