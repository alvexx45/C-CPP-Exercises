#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct clientes {
    int codigo;
    char email[40];
    char pagina;
    float horas;
};

void lerCliente(struct clientes *c) {
    printf("\nCódigo: ");
    scanf("%d", &c->codigo);
    printf("Email: ");
    scanf(" %[^\n]s", c->email);
    printf("Página: ");
    scanf(" %c", &c->pagina);
    printf("Horas: ");
    scanf("%f", &c->horas);
}

void imprimirValor(struct clientes c) {
    float preco;
    
    if (c.horas <= 20) {
        preco = 35.0;
    } else {
        preco = 35.0 + ((c.horas - 20) * 2.5);
    }
    
    if (c.pagina == 's') {
        preco += 40.0;
    }

    printf("Preço: R$ %.2f\n", preco);
}

int main() {
    struct clientes registros[3];
    int i = 0;

    for (i = 0; i < 3; i++) {
        lerCliente(&registros[i]);
    }

    for (i = 0; i < 3; i++) {
        printf("Cliente %d\n", registros[i].codigo);
        imprimirValor(registros[i]);
    }

    return 0;
}