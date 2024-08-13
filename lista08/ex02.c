#include <stdio.h>

typedef struct {
    char item[20];
} produto;

typedef struct {
    char loja[30];
    long int telefone;
    float preco;
} registro;

void lerProduto(produto *p) {
    printf("Produto: ");
    scanf(" %[^\n]", p->item);
}

void lerRegistro(registro *r) {
    printf("Loja: ");
    scanf(" %[^\n]", r->loja);
    printf("Telefone: ");
    scanf("%ld", &r->telefone);
    printf("Preço: ");
    scanf("%f", &r->preco);
}

int main() {
    produto eletrodomestico;
    registro registros[3];
    float media = 0;

    lerProduto(&eletrodomestico);

    for (int i = 0; i < 3; i++) {
        lerRegistro(&registros[i]);
        media += registros[i].preco;
    }

    media /= 3;

    printf("\nProduto: %s\n", eletrodomestico.item);
    printf("Média de preços: R$ %.2f\n", media);

    printf("\nLojas com preço abaixo da média:\n");
    for (int i = 0; i < 3; i++) {
        if (registros[i].preco < media) {
            printf("Loja: %s, Telefone: %ld\n", registros[i].loja, registros[i].telefone);
        }
    }

    return 0;
}