#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int tamanho;
    int *vetor;

    printf("Número de elementos: ");
    scanf("%d", &tamanho);

    vetor = (int*)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação");
        return 1;
    }
    
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nElementos inseridos: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: %d\n", i, vetor[i]);
    }

    free(vetor);

    return 0;
}