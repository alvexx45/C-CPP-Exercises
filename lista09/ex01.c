#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 100

int conector(char *palavra) {
    char *conectores[] = {"e", "do", "da", "dos", "das", "de", "di", "du"};
    int numConectores = sizeof(conectores) / sizeof(conectores[0]);
    
    for (int i = 0; i < numConectores; i++) {
        if (strcmp(palavra, conectores[i]) == 0) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    char nome[MAX_LENGTH];
    char iniciais[MAX_LENGTH];
    char *token;
    
    printf("Digite o nome completo: ");
    fgets(nome, MAX_LENGTH, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    
    token = strtok(nome, " ");
    
    int pos_iniciais = 0;
    while (token != NULL) {
        if (!conector(token)) {
            iniciais[pos_iniciais] = toupper(token[0]);
            pos_iniciais++;
        }
        
        token = strtok(NULL, " "); 
    }
    
    iniciais[pos_iniciais] = '\0'; 
    
    printf("As iniciais do nome são: %s\n", iniciais);
    
    return 0;
}
