#include <stdio.h>

int main() {
  float raio, per, area;
  
  printf("Raio do círculo: ");
  scanf("%f", &raio);

  per = 2 * 3.14 * raio;
  area = 3.14 * raio * raio;

  printf("Perímetro: %.2f\n", per);
  printf("Area: %.2f\n", area);
  
  return 0;
}