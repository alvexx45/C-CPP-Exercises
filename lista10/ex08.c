#include <stdio.h>

int main() {
    int quantidadeVeiculos;
    float valorAluguel;
    float faturamentoAnual, valorMultasMes, valorManutencaoAnual;

    printf("Digite a quantidade de veículos da locadora: ");
    scanf("%d", &quantidadeVeiculos);
    printf("Digite o valor do aluguel por mês: ");
    scanf("%f", &valorAluguel);

    faturamentoAnual = quantidadeVeiculos * valorAluguel * 4;

    float veiculosAlugadosMes = quantidadeVeiculos / 3.0;
    float veiculosDevolvidosAtraso = veiculosAlugadosMes / 10.0;
    valorMultasMes = veiculosDevolvidosAtraso * valorAluguel * 0.2;

    float veiculosManutencaoAno = quantidadeVeiculos * 0.02;
    valorManutencaoAnual = veiculosManutencaoAno * 600.0;

    printf("\n");
    printf("Faturamento anual da locadora: R$ %.2f\n", faturamentoAnual);
    printf("Valor ganho com multas no mês: R$ %.2f\n", valorMultasMes);
    printf("Valor gasto com manutenção anual: R$ %.2f\n", valorManutencaoAnual);

    FILE *arquivo;
    arquivo = fopen("resultado.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    fprintf(arquivo, "%.2f\n", faturamentoAnual);
    fprintf(arquivo, "%.2f\n", valorMultasMes);
    fprintf(arquivo, "%.2f\n", valorManutencaoAnual);

    fclose(arquivo);
    printf("Resultados gravados com sucesso no arquivo 'resultado.txt'.\n");

    return 0;
}
