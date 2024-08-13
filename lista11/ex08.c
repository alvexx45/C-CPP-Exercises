#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    struct Data hoje;

    hoje.dia = 20;
    hoje.mes = 6;
    hoje.ano = 2024;

    printf("Data de hoje: %02d/%02d/%04d\n", hoje.dia, hoje.mes, hoje.ano);

    return 0;
}
