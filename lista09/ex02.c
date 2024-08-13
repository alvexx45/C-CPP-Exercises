#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int main() {
    char texto[MAX_LENGTH];
    char semEspacos[MAX_LENGTH];
    int i, j;

    printf("Digite o texto:\n");
    fgets(texto, MAX_LENGTH, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    i = 0; 
    j = 0; 


    while (texto[i] != '\0') {

        if (!isspace(texto[i])) {
            semEspacos[j] = texto[i];
            j++;
        } else if (isspace(texto[i]) && (j == 0 || !isspace(semEspacos[j - 1]))) {
            semEspacos[j] = ' ';
            j++;
        }
        i++;
    }

    semEspacos[j] = '\0';

    printf("Texto sem espaços extras:\n%s\n", semEspacos);

    return 0;
}
