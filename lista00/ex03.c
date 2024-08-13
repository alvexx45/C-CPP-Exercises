#include <stdio.h>
#include <math.h>

int main() {
  float b, h, per, area, diag;
  
  printf("Base do retângulo: ");
  scanf("%f", &b);

  printf("\n Altura do retângulo: ");
  scanf("%f", &h);

  per = 2 * (b + h);
  area = b * h;
  diag = sqrt(pow(b, 2) + pow(h, 2));

  printf("\n Perímetro do retângulo: %.2f", per);
  printf("\n Área do retângulo: %.2f", area);
  printf("\n Diagonal do retângulo: %.2f", diag);
  
  return 0;
}