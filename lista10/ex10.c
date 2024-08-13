#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[] = "numeros.txt";
    float numero;
    float max = -999999;
    float min = 999999;
    float soma = 0.0;
    int contador = 0;

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", nomeArquivo);
        return 1;
    }

    while (fscanf(arquivo, "%f", &numero) == 1) {
        if (numero > max) {
            max = numero;
        }

        if (numero < min) {
            min = numero;
        }

        soma += numero;
        contador++;
    }

    fclose(arquivo);

    if (contador == 0) {
        printf("O arquivo está vazio ou não contém números válidos.\n");
        return 1;
    }

    float media = soma / contador;

    printf("Valor máximo: %.2f\n", max);
    printf("Valor mínimo: %.2f\n", min);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}
