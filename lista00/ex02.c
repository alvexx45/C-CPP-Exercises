#include <stdio.h>

int main() {
  float salMin, consKw, valKw, valTotal, valDesc;

  // Ler o valor do salário mínimo e quantidade de kW gasta
  
  printf("Salário mínimo atual: ");
  scanf("%f", &salMin);

  printf("\nConsumo residencial de kW: ");
  scanf("%f", &consKw);

  // Calcular o valor por kW, valor total e valor com desconto
  
  valKw = salMin / 7 / 100;
  valTotal = consKw * valKw;
  valDesc = valTotal * 0.9;

  // Resultados
  
  printf("\n Valor em reais de cada kW: %.2f", valKw);
  printf("\n Valor em reais a pagar: %.2f", valTotal);
  printf("\n Valor com desconto de 10%%: %.2f", valDesc);
  
  return 0;
}