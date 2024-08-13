#include <stdio.h>

void codificarCesar(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'a' + (str[i] - 'a' + 3) % 26;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + (str[i] - 'A' + 3) % 26;
        }
        i++;
    }
}

int main() {
    char str[1000];

    printf("Digite uma string para criptografar usando o Código de César: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    codificarCesar(str);

    printf("String criptografada usando o Código de César (3 posições): %s\n", str);

    return 0;
}
