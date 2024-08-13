#include <stdio.h>

long long fatorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

double serie(int n) {
    if (n == 1)
        return 1.0;
    else
        return (1.0 / fatorial(n)) + serie(n - 1);
}

int main() {
    int n;

    printf("Valor inteiro positivo para N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("N deve ser um valor inteiro positivo.\n");
        return 1;
    }

    double resultado = serie(n);

    printf("Valor de S: %lf\n", resultado);

    return 0;
}
