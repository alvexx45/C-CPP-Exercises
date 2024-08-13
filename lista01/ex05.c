#include <stdio.h>

int main() {
  float dN, dP, dP80, dif;

  printf("Valor da diária: ");
  scanf("%f", &dN);

  dP = dN * 0.75;
  dP80 = 64 * dP;
  dN = 40 * dN;

  dif = dP80 - dN;

  printf("Valor promocional: R$ %.2f\n", dP);
  printf("Promocional com 80%% ocupado: R$ %.2f\n", dP80);
  printf("Normal com 50%% ocupado: R$ %.2f\n", dN);
  printf("Diferença entre os valores: R$ %.2f\n", dif);

  return 0;
}