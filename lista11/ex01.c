#include <stdio.h>

void ordenar(float vetor[], int tamanho) {
    int i, j, max;
    float temp;

    for (int i = 0; i < tamanho - 1; i++) {
        max = i;
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[j] > vetor[max]) {
                max = j;
            }
        }
        if (max != i) {
            temp = vetor[max];
            vetor[max] = vetor[i];
            vetor [i] = temp;
        }
    }
}

int main() {
    float vetor[] = {3.5, 2.1, 4.8, 1.9, 5.6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int i;

    ordenar(vetor, tamanho);

    printf("Vetor ordenado em ordem decrescente:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}
