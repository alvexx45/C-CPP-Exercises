#include <stdio.h>

int main() {
    int l;

    scanf("%d", &l);

    while (l <= 0) {
        scanf("%d", &l);
    }

    // unsigned int para trabalhar com valores que podem ser gerados
    unsigned int fib1 = 0, fib2 = 1, fibProx;

    printf("Primeiros %d elementos de Fibonacci: \n", l);

    for (int i = 1; i <= l; i++) {
        if (i == 1) {
            printf("%u ", fib1);
            continue;
        }
        if (i == 2) {
            printf("%u ", fib2);
            continue;
        }
        fibProx = fib1 + fib2;
        fib1 = fib2;
        fib2 = fibProx;

        printf("%u ", fibProx);
    }
    printf("\n");

    return 0;
}