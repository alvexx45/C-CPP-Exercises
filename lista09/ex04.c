#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 1000

void limparString(char *str) {
    int i, j = 0;
    for (i = 0; str[i]; i++) {
        if (!isspace(str[i]) && !ispunct(str[i])) {
            str[j++] = tolower(str[i]);
        }
    }
    str[j] = '\0';
}

int palindromo(char *str) {
    int i, len;
    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char texto[MAX_LENGTH];

    printf("Digite uma sequência de caracteres: ");
    fgets(texto, MAX_LENGTH, stdin);

    limparString(texto);

    if (palindromo(texto)) {
        printf("A sequência '%s' é um palíndromo.\n", texto);
    } else {
        printf("A sequência '%s' não é um palíndromo.\n", texto);
    }

    return 0;
}
