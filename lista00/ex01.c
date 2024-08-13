#include <stdio.h>

int main() {
  int a = 0, num;
  printf("Digite um número inteiro com 3 dígitos: ");
  scanf("%d", &num);

  a = num / 100;
  num = num % 100;
  a = a + (num / 10) * 10;
  num = num % 10;
  a = a + num * 100;
  
  printf("O número invertido é %d", a);
  
  return 0;
}