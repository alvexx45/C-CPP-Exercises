#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data {
	int dia, mes;
};

struct pessoa {
	char nome[30];
	struct data aniversario;
};

void lerData(struct data *d) {
	scanf("%d/%d", &d->dia, &d->mes);
}

void imprimeData(struct data d) {
	printf("%02d/%02d\n", d.dia, d.mes);
}

void lerPessoa(struct pessoa *p) {
	printf("Nome: ");
	scanf(" %[^\n]s", p->nome);
	printf("Aniversário (dd/mm): ");
	lerData(&p->aniversario);
}

void imprimePessoa(struct pessoa p) {
	switch (p.aniversario.mes) {
		case 1:
			printf("Janeiro");
			break;
		case 2:
			printf("Fevereiro");
			break;
		case 3:
			printf("Março");
			break;
		case 4:
			printf("Abril");
			break;
		case 5:
			printf("Maio");
			break;
		case 6:
			printf("Junho");
			break;
		case 7:
			printf("Julho");
			break;
		case 8:
			printf("Agosto");
			break;
		case 9:
			printf("Setembro");
			break;
		case 10:
			printf("Outubro");
			break;
		case 11:
			printf("Novembro");
			break;
		case 12:
			printf("Dezembro");
			break;
	}
	printf(" - Dia %d: ", p.aniversario.dia);
	printf("%s\n", p.nome);
}

int main () {
	struct pessoa pessoas[40];
	int i = 0;

	for (i = 0; i < 40; i++) {
		lerPessoa(&pessoas[i]);
	}

	for (i = 0; i < 40; i++) {
		imprimePessoa(pessoas[i]);
	}
	
	return 0;
}
