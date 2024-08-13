#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 1500
#define TAM_NOME_OBRA 100
#define TAM_NOME_AUTOR 50
#define TAM_EDITOR 50

typedef enum {
    CIENCIAS_EXATAS,
    CIENCIAS_HUMANAS,
    BIOLOGICAS
} areaLivro;

typedef struct {
    int codigo;
    char doacao;
    char nomeObra[TAM_NOME_OBRA];
    char nomeAutor[TAM_NOME_AUTOR];
    char editora[TAM_EDITOR];
    areaLivro area;
} livro;

void adicionarLivro(livro livros[], int *numLivros) {
    if (*numLivros < MAX_LIVROS) {
        livro novoLivro;
        printf("Digite o código de catalogação: ");
        scanf("%d", &novoLivro.codigo);
        getchar();

        printf("Foi doado? (S/N): ");
        scanf("%c", &novoLivro.doacao);
        getchar();

        printf("Digite o nome da obra: ");
        fgets(novoLivro.nomeObra, TAM_NOME_OBRA, stdin);
        novoLivro.nomeObra[strcspn(novoLivro.nomeObra, "\n")] = '\0';

        printf("Digite o nome do autor: ");
        fgets(novoLivro.nomeAutor, TAM_NOME_AUTOR, stdin);
        novoLivro.nomeAutor[strcspn(novoLivro.nomeAutor, "\n")] = '\0';

        printf("Digite o nome da editora: ");
        fgets(novoLivro.editora, TAM_EDITOR, stdin);
        novoLivro.editora[strcspn(novoLivro.editora, "\n")] = '\0';

        printf("Digite a área do livro (0 - Ciências Exatas, 1 - Ciências Humanas, 2 - Biológicas): ");
        int opcaoArea;
        scanf("%d", &opcaoArea);
        getchar();
        switch (opcaoArea) {
            case 0:
                novoLivro.area = CIENCIAS_EXATAS;
                break;
            case 1:
                novoLivro.area = CIENCIAS_HUMANAS;
                break;
            case 2:
                novoLivro.area = BIOLOGICAS;
                break;
            default:
                printf("Opção inválida.\n");
                return;
        }

        livros[*numLivros] = novoLivro;
        (*numLivros)++;

        printf("livro adicionado com sucesso!\n");
    } else {
        printf("Não é possível adicionar mais livros, capacidade máxima atingida.\n");
    }
}

void listarLivros(livro livros[], int numLivros) {
    printf("Listagem de livros:\n");
    for (int i = 0; i < numLivros; i++) {
        printf("Código: %d\n", livros[i].codigo);
        printf("Doação: %c\n", livros[i].doacao);
        printf("Obra: %s\n", livros[i].nomeObra);
        printf("Autor: %s\n", livros[i].nomeAutor);
        printf("Editora: %s\n", livros[i].editora);
        printf("Área: ");
        switch (livros[i].area) {
            case CIENCIAS_EXATAS:
                printf("Ciências Exatas\n");
                break;
            case CIENCIAS_HUMANAS:
                printf("Ciências Humanas\n");
                break;
            case BIOLOGICAS:
                printf("Biológicas\n");
                break;
        }
        printf("\n");
    }
}

int main() {
    livro livros[MAX_LIVROS];
    int numLivros = 0;
    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Adicionar livro\n");
        printf("2. Listar livros\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                adicionarLivro(livros, &numLivros);
                break;
            case 2:
                listarLivros(livros, numLivros);
                break;
            case 3:
                printf("Encerrando programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}
