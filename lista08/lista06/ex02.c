#include <stdio.h>

void preencher(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

int negativos(int vetor[], int tamanho, int vetorNegativos[]) {
    int j = 0;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < 0) {
            vetorNegativos[j] = vetor[i];
            j++;
        }
    }

    return j;
}

void exibir(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Negativo %d: %d\n", i + 1, vetor[i]);
    }
}

int main() {
    int vetor[4];
    int vetorNegativos[4];

    int novoTamanho;

    preencher(vetor, 4);
    novoTamanho = negativos(vetor, 4, vetorNegativos);
    exibir(vetorNegativos, novoTamanho);

    return 0;
}