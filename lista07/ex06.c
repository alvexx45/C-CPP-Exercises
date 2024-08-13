#include <stdio.h>
#include <stdlib.h>

int calcularSoma(int *arr, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += *(arr + i);
    }
    return soma;
}

int main() {
    int n, i;
    int *arr;

    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", arr + i);
    }

    int soma = calcularSoma(arr, n);

    printf("A soma de todos os elementos do vetor é: %d\n", soma);

    free(arr);

    return 0;
}
