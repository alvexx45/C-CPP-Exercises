#include <stdio.h>
#include <ctype.h>
#include <string.h>

void corrigirTelefone(char *telefone) {
    int i, j = 0;
    char telefoneLimpo[15];
    char telefoneCorrigido[15];

    for (i = 0; telefone[i] != '\0'; i++) {
        if (isdigit(telefone[i])) {
            telefoneLimpo[j++] = telefone[i];
        }
    }
    telefoneLimpo[j] = '\0';

    if (strlen(telefoneLimpo) == 8) {
        strcpy(telefoneCorrigido, "9");
        strcat(telefoneCorrigido, telefoneLimpo);
    } else {
        strcpy(telefoneCorrigido, telefoneLimpo);
    }

    char telefoneFormatado[15];
    if (strlen(telefoneCorrigido) == 9) {
        sprintf(telefoneFormatado, "%c%c%c%c%c-%c%c%c%c",
                telefoneCorrigido[0], telefoneCorrigido[1], telefoneCorrigido[2],
                telefoneCorrigido[3], telefoneCorrigido[4], telefoneCorrigido[5],
                telefoneCorrigido[6], telefoneCorrigido[7], telefoneCorrigido[8]);
    } else {
        strcpy(telefoneFormatado, telefoneCorrigido);
    }

    printf("Telefone: %s\n", telefone);
    if (strlen(telefoneLimpo) == 8) {
        printf("Telefone possui 8 dígitos. Vou acrescentar o dígito '9' na frente.\n");
    }
    printf("Telefone corrigido sem formatação: %s\n", telefoneCorrigido);
    printf("Telefone corrigido com formatação: %s\n", telefoneFormatado);
}

int main() {
    char telefone[20];

    printf("Digite um número de telefone (com ou sem traço separador): ");
    fgets(telefone, sizeof(telefone), stdin);
    telefone[strcspn(telefone, "\n")] = '\0';

    corrigirTelefone(telefone);

    return 0;
}
