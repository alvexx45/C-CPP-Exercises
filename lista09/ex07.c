#include <stdio.h>

void converter(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Digite uma cadeia de caracteres: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';

    converter(str);

    printf("Cadeia de caracteres em maiúscula: %s\n", str);

    return 0;
}
