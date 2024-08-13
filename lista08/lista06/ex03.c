#include <stdio.h>

void preencher(int x[], int y[], int tamanho) {
    printf("Vetor X: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("\nVetor Y: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &y[i]);
    }
}

void intercalar(int x[], int y[], int intercalado[], int tamanho) {
    int j = 0;
    for (int i = 0; i < tamanho; i++) {
        intercalado[j] = x[i];
        j++;
        intercalado[j] = y[i];
        j++;
    }
}

void exibir(int vetor[], int tamanho) {
    printf("\nVetor intercalado: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("Posição %d: %d\n", i, vetor[i]);
    }
}

int main() {
    int x[10], y[10], intercalado[20];

    preencher(x, y, 10);
    intercalar(x, y, intercalado, 10);
    exibir(intercalado, 20);

    return 0;
}