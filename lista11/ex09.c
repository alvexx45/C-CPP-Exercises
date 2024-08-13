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

struct DataHora {
    struct Data data;
    struct Horario horario;
};

int main() {
    struct DataHora agora;

    agora.data.dia = 20;
    agora.data.mes = 6;
    agora.data.ano = 2024;

    agora.horario.horas = 10;
    agora.horario.minutos = 30;
    agora.horario.segundos = 45;

    printf("Data e Hora atual: %02d/%02d/%04d %02d:%02d:%02d\n",
           agora.data.dia, agora.data.mes, agora.data.ano,
           agora.horario.horas, agora.horario.minutos, agora.horario.segundos);

    return 0;
}
