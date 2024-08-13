#include <stdio.h>

int main() {
  int c, p = 0;
  float slr = 0, medSlr = 0, medFilhos = 0, maiorSlr = 0, percentual = 0, filhos = 0;


  for (c = 0; slr >= 0; c++) {
    printf("\nDigite o salário: ");
    scanf("%f", &slr);
    printf("Quantos filhos você tem? ");
    scanf("%f", &filhos);

    if (slr < 0) {
      c--;
    } else if (slr <= 100) {
      p++;
      percentual += slr;
    }
    
    medSlr += slr;
    medFilhos += filhos;

    if (slr > maiorSlr) {
      maiorSlr = slr;
    }
  }

  medSlr /= c;
  medFilhos /= c;
  percentual = (percentual / 100) * p;

  printf("\nMédia de salário da população: %.2f", medSlr);
  printf("\nMédia de filhos da população: %.2f", medFilhos);
  printf("\nMaior salário da população: %.2f", maiorSlr);
  printf("\nPercentual de pessoas com salário até R$100,00: %.2f%%", percentual);

  return 0;
}