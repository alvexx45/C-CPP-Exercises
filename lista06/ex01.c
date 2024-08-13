#include <stdio.h>

void  preenchaNotas(float vetor[]) {
    for (int i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
}

void notas(float vetor[]) {
    float media = 0;
    int acimaMedia = 0;

    for (int i = 0; i < 10; i++) {
        media += vetor[i];
    }
    
    media /= 10;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] > media) {
            acimaMedia++;
        }
    }

    printf("Média da turma: %.2f\n", media);
    printf("Alunos acima da média: %d\n", acimaMedia);
}

int main() {
    float vetor[10];

    preenchaNotas(vetor);
    notas(vetor);

    return 0;
}