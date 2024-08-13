#include <stdio.h>

int main() {
    int dia, mes, ano;
    char data[11]; 
    
    printf("Digite a data de nascimento (dd/mm/aaaa): ");
    scanf("%s", data);

    sscanf(data, "%d/%d/%d", &dia, &mes, &ano);

    char *nomesMeses[] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    printf("Você nasceu em %02d de %s de %04d.\n", dia, nomesMeses[mes - 1], ano);

    return 0;
}
