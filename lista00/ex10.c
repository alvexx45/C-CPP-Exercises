#include <stdio.h>

int main() {

  int hora, min, minPass;
  
  printf("Digite a hora (0-23): ");
  scanf("%d", &hora);
  while (hora < 0 || hora > 23) {
    scanf("%d", &hora);
  }
  
  printf("\nDigite os minutos (0-59): ");
  scanf("%d", &min);
  while (min < 0 || min > 59) {
    scanf("%d", &min);
  }

  minPass = hora * 60 + min;

  printf("\nDesde o início do dia passaram-se %d minutos", minPass);
  
  return 0;
}