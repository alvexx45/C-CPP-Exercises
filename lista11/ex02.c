#include <stdio.h>
#include <string.h>

void inverter(char stringInvertida[]) {
    int i, j;
    int length = strlen(stringInvertida);

    char tempString[100];

    for (i = 0, j = length - 1; i < length; i++, j--) {
        tempString[i] = stringInvertida[j];
    }
    tempString[length] = '\0';

    strcpy(stringInvertida, tempString);

    printf("String invertida: %s\n", stringInvertida);
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%[^\n]", string);

    inverter(string);

    return 0;
}
