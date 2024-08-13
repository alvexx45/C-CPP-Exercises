#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap((arr + j), (arr + j + 1));
            }
        }
    }
}

int main() {
    int n, i;
    int *arr;

    printf("Número de elementos: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", arr + i);
    }

    bubbleSort(arr, n);

    printf("Elementos ordenados são:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    free(arr);

    return 0;
}
