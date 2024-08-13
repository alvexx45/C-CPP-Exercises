#include <stdio.h>
#include <stdlib.h>

float *produtoEscalar(const float *v1, const float *v2, int tamanho) {
    float *resultado = (float*)malloc(tamanho * sizeof(float));
    if (resultado == NULL) {
        fprintf(stderr, "Erro ao alocar memória\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = v1[i] * v2[i];
    }

    return resultado;
}

int main() {
    float v1[] = {1, 2, 3};
    float v2[] = {4, 5, 6};
    int tamanho = sizeof(v1) / sizeof(v1[0]);

    float* resultado = produtoEscalar(v1, v2, tamanho);

    printf("Produto escalar:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f\t", resultado[i]);
    }
    printf("\n");

    free(resultado);

    return 0;
}
