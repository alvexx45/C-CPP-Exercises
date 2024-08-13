#include <stdio.h>

int main() {
  int c, n, d3e9 = 0, d2e5 = 0;
  
  for (c = 0; c < 10; c++) {
    printf("\nNúmero: ");
    scanf("%d", &n);
    if (n % 2 == 0 && n % 5 == 0) {
      printf("Divisível por 2 e 5\n");
      d2e5++;
    } else if (n % 3 == 0 && n % 9 == 0) {
      printf("Divisível por 3 e 9\n");
      d3e9++;
    } else {
      printf("Não é divisível pelos valores\n");
    }
  }

  printf("\n\nTotal de nºs divisíveis por 2 e 5: %d", d2e5);
  printf("\nTotal de nºs divisíveis por 3 e 9: %d", d3e9);
  
  return 0;
}