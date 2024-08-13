#include <stdio.h>

int main() {
    int pos = 0, neg = 0, zero = 0;
    int valor;
    char c;

    printf("Sequência de valores inteiros, separados por espaço: ");

    // Ler os valores até encontrar um caractere de quebra de linha '\n'
    while (scanf("%d%c", &valor, &c) == 2 && c != '\n') {
        if (valor > 0) {
            pos++;
        } else if (valor < 0) {
            neg++;
        } else {
            zero++;
        }
    }

    // Último valor lido
    if (valor > 0) {
        pos++;
    } else if (valor < 0) {
        neg++;
    } else {
        zero++;
    }

    printf("Positivos: %d\n", pos);
    printf("Negativos: %d\n", neg);
    printf("Zeros: %d\n", zero);

    return 0;
}
