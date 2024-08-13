#include <stdio.h>

double aprovados(int alunos) {
    double soma = 0.0;
    int k = 0;
    double nota;

    for (int i = 0; i < alunos; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%lf", &nota);

        if (nota >= 6.0) {
            soma += nota;
            k++;
        }
    }

    if (k == 0) {
        return 0.0;
    }

    return soma / k;
}

int main() {
    int alunos;

    printf("Digite o número de alunos: ");
    scanf("%d", &alunos);

    double media = aprovados(alunos);

    if (media == 0.0) {
        printf("Nenhum aluno aprovado.\n");
    } else {
        printf("A média das notas dos alunos aprovados é: %.2f\n", media);
    }

    return 0;
}
