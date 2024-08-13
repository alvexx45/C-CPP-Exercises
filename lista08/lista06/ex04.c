#include <stdio.h>

#define NUM_DIAS 31

int main() {
    float temperaturas[NUM_DIAS];
    float menorTemp = 40.0, maiorTemp = 15.0, somaTemp = 0.0;
    int diasInferiores = 0;

    for (int i = 0; i < NUM_DIAS; i++) {
        printf("Temperatura do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);

        if (temperaturas[i] < menorTemp) {
            menorTemp = temperaturas[i];
        }
        if (temperaturas[i] > maiorTemp) {
            maiorTemp = temperaturas[i];
        }

        somaTemp += temperaturas[i];
    }

    float tempMedia = somaTemp / NUM_DIAS;

    for (int i = 0; i < NUM_DIAS; i++) {
        if (temperaturas[i] < tempMedia) {
            diasInferiores++;
        }
    }

    printf("Menor temperatura: %.2f°C\n", menorTemp);
    printf("Maior temperatura: %.2f°C\n", maiorTemp);
    printf("Temperatura média: %.2f°C\n", tempMedia);
    printf("Dias com temperatura inferior à média: %d\n", diasInferiores);

    return 0;
}
