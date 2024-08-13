#include <stdio.h>

int main(void) {
  int velMax, velMot;
  float multa;

  printf("Velocidade máxima permitida: ");
  scanf("%d", &velMax);
  printf("Velocidade do motorista: ");
  scanf("%d", &velMot);

  if (velMot <= (velMax + 10)) {
    multa = 50;
  } else if (velMot > (velMax + 11) && velMot <= (velMax + 30)) {
    multa = 100;
  } else {
    multa = 200;
  }
  printf("Valor da multa: R$ %.2f", multa);
  
  return 0;
}