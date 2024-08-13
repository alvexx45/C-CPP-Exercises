#include <stdio.h>
#include <stdlib.h>

int *produto(const int *v, int **m, int tamanho) {
    int *resultado = (int *)malloc(tamanho * sizeof(int));
    if (resultado == NULL) {
        fprintf(stderr, "Erro ao alocar memória\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = 0;
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            resultado[i] += v[j] * m[j][i];
        }
    }

    return resultado;
}

int main() {
    int v[] = {1, 2, 3};
    int tamanho = sizeof(v) / sizeof(v[0]);

    int **m = (int **)malloc(tamanho * sizeof(int *));
    for (int i = 0; i < tamanho; i++) {
        m[i] = (int *)malloc(tamanho * sizeof(int));
    }

    int valores[3][3] = {
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            m[i][j] = valores[i][j];
        }
    }

    int *resultado = produto(v, m, tamanho);

    printf("Produto vetor x matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d\t", resultado[i]);
    }
    printf("\n");
    
    for (int i = 0; i < tamanho; i++) {
        free(m[i]);
    }
    free(m);
    free(resultado);

    return 0;
}