#include <stdio.h>

struct Horario {
    int horas;
    int minutos;
    int segundos;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Venda {
    char nome[100]; 
    float preco;
    int quantidade; 
    struct DataHora {
        struct Data data;
        struct Horario horario;
    } dataHora; 
};

int main() {
    struct Venda venda1 = {
        "Produto A",
        25.50,
        3,
        { {20, 6, 2024}, {10, 30, 45} }  
    };

    printf("Dados da Venda:\n");
    printf("Produto: %s\n", venda1.nome);
    printf("Preco unitario: R$ %.2f\n", venda1.preco);
    printf("Quantidade: %d\n", venda1.quantidade);
    printf("Data da Venda: %02d/%02d/%04d %02d:%02d:%02d\n",
           venda1.dataHora.data.dia, venda1.dataHora.data.mes, venda1.dataHora.data.ano,
           venda1.dataHora.horario.horas, venda1.dataHora.horario.minutos, venda1.dataHora.horario.segundos);

    return 0;
}
