#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char texto[1000];

    printf("Digite o texto a ser gravado no arquivo:\n");

    if (fgets(texto, sizeof(texto), stdin) == NULL) {
        printf("Erro ao ler o texto.\n");
        return 1;
    }

    arquivo = fopen("texto.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "%s", texto);

    fclose(arquivo);

    printf("Texto gravado com sucesso no arquivo 'texto.txt'.\n");

    return 0;
}
