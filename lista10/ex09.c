#include <stdio.h>

#define MAX_ALUNOS 100

struct Aluno {
    int matricula;
    long long int telefone;
};

void adicionarDadosAlunos() {
    FILE *arquivo;
    char nomeArquivo[] = "dados_alunos.txt";
    int quantidadeAlunos;
    struct Aluno alunos[MAX_ALUNOS];

    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    printf("Digite a quantidade de alunos a serem adicionados: ");
    scanf("%d", &quantidadeAlunos);

    for (int i = 0; i < quantidadeAlunos; i++) {
        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite o telefone do aluno %d: ", i + 1);
        scanf("%lld", &alunos[i].telefone);

        fprintf(arquivo, "%d %lld\n", alunos[i].matricula, alunos[i].telefone);
    }

    fclose(arquivo);
    printf("Dados dos alunos gravados com sucesso no arquivo 'dados_alunos.txt'.\n");
}

void lerDadosAlunos() {
    FILE *arquivo;
    char nomeArquivo[] = "dados_alunos.txt";
    int matricula;
    long long int telefone;
    int contador = 0;

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    printf("\nDados dos alunos armazenados:\n");
    printf("Matrícula\tTelefone\n");

    while (fscanf(arquivo, "%d %lld", &matricula, &telefone) == 2) {
        printf("%d\t\t%lld\n", matricula, telefone);
        contador++;
    }

    fclose(arquivo);

    if (contador == 0) {
        printf("Nenhum aluno encontrado no arquivo 'dados_alunos.txt'.\n");
    } else {
        printf("Total de alunos encontrados: %d\n", contador);
    }
}

int main() {
    int opcao;

    do {
        printf("\nEscolha uma opção:\n");
        printf("1 - Adicionar dados de alunos\n");
        printf("2 - Ler dados de alunos do arquivo\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarDadosAlunos();
                break;
            case 2:
                lerDadosAlunos();
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
