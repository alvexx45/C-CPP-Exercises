#include <stdio.h>

void calcCircunferencia(float R, float *compr, float *area) {
  *compr = 2 * 3.14 * R;
  *area = 3.14 * (R * R);

  printf("Comprimento: %.2f\n", *compr);
  printf("Área: %.2f\n", *area);
}

int main() {
  float raio, comp, area;

  printf("Digite o raio: ");
  scanf("%f", &raio);

  calcCircunferencia(raio, &comp, &area);
  
  return 0;
}