#include <stdio.h>

int main() {
    int numero, divisor, somaDivisores = 0;
    FILE *arquivo;
    char nomeArquivo[] = "soma_divisores.txt";

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    printf("Divisores de %d: ", numero);
    for (divisor = 1; divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            printf("%d ", divisor);
            somaDivisores += divisor;
        }
    }
    printf("\n");

    fprintf(arquivo, "Soma dos divisores de %d: %d\n", numero, somaDivisores);

    fclose(arquivo);

    printf("A soma dos divisores foi salva no arquivo 'soma_divisores.txt'.\n");

    return 0;
}
