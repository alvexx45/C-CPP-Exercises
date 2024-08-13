#include <stdio.h>
#include <ctype.h>

void contar(char *str, int *vogais, int *consoantes) {
    *vogais = 0;
    *consoantes = 0;
    char *p = str;

    while (*p != '\0') {
        if (isalpha(*p)) { // Verifica se é uma letra
            char letra = tolower(*p); // Converte para minúscula
            if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
                (*vogais)++;
            } else {
                (*consoantes)++;
            }
        }
        p++;
    }
}

int main() {
    char str[100];
    int vogais, consoantes;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    contar(str, &vogais, &consoantes);

    printf("Número de vogais: %d\n", vogais);
    printf("Número de consoantes: %d\n", consoantes);

    return 0;
}
