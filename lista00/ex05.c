#include <stdio.h>
#include <math.h>

int main() {
  float cat1, cat2, hip;
  
  printf("Primeiro cateto: ");
  scanf("%f", &cat1);
  
  printf("\nSegundo cateto: ");
  scanf("%f", &cat2);

  hip = sqrt(pow(cat1, 2) + pow(cat2, 2));

  printf("\nHipotenusa: %.2f", hip);
  
  return 0;
}