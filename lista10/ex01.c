#include <stdio.h>

int main() {
    FILE *arquivo;
    int i;

    arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (i = 1; i <= 10; i++) {
        fprintf(arquivo, "%d\n", i);
    }

    fclose(arquivo);

    printf("Os números de 1 a 10 foram escritos no arquivo 'numeros.txt'.\n");

    return 0;
}
