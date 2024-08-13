#include <stdio.h>
#include <string.h>

int main() {
    char vetor[] = "atividade";
    char *p = vetor + strlen(vetor) - 1;

    printf("Vetor ao contrário: ");
    while (p >= vetor) {
        printf("%c", *p);
        p--;
    }
    printf("\n");

    return 0;
}
