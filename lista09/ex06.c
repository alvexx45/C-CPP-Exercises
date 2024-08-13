#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, j, tamanho;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        printf("%c\n", palavra[i]);
    }

    return 0;
}
