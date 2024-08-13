#include <stdio.h>

int main() {
    char alfabeto[26];
    char *p;
    int i;

    for (i = 0; i < 26; i++) {
        alfabeto[i] = 'A' + i;
    }

    p = alfabeto;

    printf("Alfabeto:\n");
    for (i = 0; i < 26; i++) {
        printf("%c ", *(p + i));
    }
    printf("\n");

    return 0;
}