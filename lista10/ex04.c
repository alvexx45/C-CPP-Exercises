#include <stdio.h>

int main() {
    FILE *arquivo;
    char linha[1000];
    int numeroDeLinhas = 0;

    arquivo = fopen("texto.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Conteúdo do arquivo:\n");
    while (fgets(linha, sizeof(linha), arquivo)) {
        printf("%s", linha);
        numeroDeLinhas++;
    }

    fclose(arquivo);

    printf("\nQuantidade de linhas no arquivo: %d\n", numeroDeLinhas);

    return 0;
}
