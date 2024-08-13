#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Número de elementos: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", arr + i);
    }

    printf("Ordem inversa:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    free(arr);

    return 0;
}