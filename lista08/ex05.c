#include <stdio.h>

typedef struct {
    char nome[30];
    char endereco[50];
    long int telefone;
} clientes;

void lerClientes(clientes *c) {
    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", c->nome);
    printf("Digite o endereco do cliente: ");
    scanf(" %[^\n]s", c->endereco);
    printf("Digite o telefone do cliente: ");
    scanf("%ld", &c->telefone);
}

void imprimirClientes(clientes c) {
    printf("Nome: %s\n", c.nome);
    printf("Endereco: %s\n", c.endereco);
    printf("Telefone: %ld\n", c.telefone);
}

int main() {
    clientes registro[2];

    for (int i = 0; i < 2; i++) {
        lerClientes(&registro[i]);
    }

    for (int i = 0; i < 2; i++) {
        printf("\nCliente %d\n", i + 1);
        imprimirClientes(registro[i]);
    }

    return 0;
}   