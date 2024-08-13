#include <stdio.h>

struct Horario {
    int horas;
    int minutos;
    int segundos;
};

int main() {
    struct Horario agora;

    agora.horas = 10;
    agora.minutos = 30;
    agora.segundos = 45;

    printf("Horario atual: %02d:%02d:%02d\n", agora.horas, agora.minutos, agora.segundos);

    return 0;
}
