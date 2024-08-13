#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;
    int contador = 0;

    arquivo = fopen("texto.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == 'a') {
            contador++;
        }
    }

    fclose(arquivo);

    printf("Quantidade de caracteres 'a' encontrados no arquivo: %d\n", contador);

    return 0;
}
