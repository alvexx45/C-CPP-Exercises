#include <stdio.h>

int main() {
    int l;
    unsigned int fib1 = 0, fib2 = 1, fibProx;

    scanf("%d", &l);

    while (l <= 0) {
        scanf("%d", &l);
    }

    printf("Elementos de Fibonacci menores que %d: \n", l);

    while (fib1 < l) {
    printf("%u ", fib1);
    fibProx = fib1 + fib2;
    fib1 = fib2;
    fib2 = fibProx;
    }
    printf("\n");

    return 0;
}