#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    int max;

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

    max = arr[0];

    for (i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    printf("O maior elemento do vetor é: %d\n", max);

    free(arr);

    return 0;
}
