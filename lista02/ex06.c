#include <stdio.h>

int main() {
    int n;
    float s = 0.0;

    printf("Valor inteiro e positivo: ");
    scanf("%d", &n);
    while (n <= 0) {
        scanf("%d", &n);
    }

    printf("Termos gerados: \n");
    for (int i = 1; i <= n; i++) {
        printf("1/%d ", i);
        if (i < n) {
            printf("+ ");
        }
        s += 1.0 / i;
    }

    printf("\nO valor final de S é: %.6f\n", s);

    return 0;
}