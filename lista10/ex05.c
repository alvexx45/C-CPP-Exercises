#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo1, *arquivo2, *arquivoConcatenado;
    char caractere;
    char nomeArquivo1[] = "arquivo1.txt";
    char nomeArquivo2[] = "arquivo2.txt";
    char nomeArquivoConcatenado[] = "arquivo_concatenado.txt";

    arquivo1 = fopen(nomeArquivo1, "r");
    arquivo2 = fopen(nomeArquivo2, "r");

    if (arquivo1 == NULL || arquivo2 == NULL) {
        printf("Erro ao abrir os arquivos de entrada.\n");
        return 1;
    }

    arquivoConcatenado = fopen(nomeArquivoConcatenado, "w");

    if (arquivoConcatenado == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo1)) != EOF) {
        fputc(caractere, arquivoConcatenado);
    }

    while ((caractere = fgetc(arquivo2)) != EOF) {
        fputc(caractere, arquivoConcatenado);
    }

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivoConcatenado);

    printf("Os arquivos foram concatenados com sucesso no arquivo 'arquivo_concatenado.txt'.\n");

    return 0;
}
