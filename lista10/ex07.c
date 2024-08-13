#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[] = "letras.txt";
    char letras[100];
    int i, N, contadorVogais = 0;

    printf("Digite a quantidade de letras a serem inseridas (N): ");
    scanf("%d", &N);

    if (N <= 0 || N >= 100) {
        printf("Quantidade inválida. O programa será encerrado.\n");
        return 1;
    }

    printf("Digite as %d letras (sem espaços): ", N);
    scanf(" %s", letras);

    arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    fprintf(arquivo, "%s", letras);

    fclose(arquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    printf("As letras inseridas no arquivo são: ");
    for (i = 0; i < N; i++) {
        char letra;
        fscanf(arquivo, "%c", &letra);
        printf("%c ", letra);

        letra = toupper(letra);

        if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            contadorVogais++;
        }
    }
    printf("\n");

    fclose(arquivo);

    printf("Quantidade de vogais encontradas: %d\n", contadorVogais);

    return 0;
}
