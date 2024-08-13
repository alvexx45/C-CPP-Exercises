#include <iostream>

using namespace std;

const int T = 5;

void preencher(int matriz[T][T]) {
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            cout << "[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

int somaLinha(int matriz[T][T]) {
    int soma = 0;

    for (int j = 0; j < T; j++) {
        soma += matriz[3][j];
    }

    return soma;
}

int somaCol(int matriz[T][T]) {
    int soma = 0;

    for (int i = 0; i < T; i++) {
        soma += matriz[i][1];
    }

    return soma;
}

int diagPrinc(int matriz[T][T]) {
    int soma = 0;

    for (int i = 0; i < T; i++) {
        soma += matriz[i][i];
    }

    return soma;
}

int diagSec(int matriz[T][T]) {
    int soma = 0;

    for (int i = 0; i < T; i++) {
        soma += matriz[i][T - 1 - i];
    }

    return soma;
}

int todos(int matriz[T][T]) {
    int soma = 0;

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            soma += matriz[i][j];
        }
    }

    return soma;
}

int main() {
    int matriz[T][T];

    preencher(matriz);

    cout << "Linha 4: " << somaLinha(matriz) << endl;
    cout << "Coluna 2: " << somaCol(matriz) << endl;
    cout << "Diagonal principal: " << diagPrinc(matriz) << endl;
    cout << "Diagonal secundária: " << diagSec(matriz) << endl;
    cout << "Todos: " << todos(matriz) << endl; 

    return 0;
}