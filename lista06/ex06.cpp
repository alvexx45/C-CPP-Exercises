#include <iostream>
using namespace std;

const int T = 4;

void preencher(int matriz[T][T]) {
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            cout << "[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

int soma(int matriz[T][T]) {
    int soma = 0;

    for (int i = 1; i < T; i++) {
        for (int j = 0; j < i; j++) {
            soma += matriz[i][j];
        }
    }
    
    return soma;
}

void mostrar(int matriz[T][T]) {
    cout << "Elementos da diagonal principal: ";

    for (int i = 0; i < T; i++) {
        cout << matriz[i][i] << " ";
    }
    cout << endl;
}

int main() {
    int matriz[T][T];

    preencher(matriz);
    mostrar(matriz);

    int diag = soma(matriz);
    cout << "Soma dos elementos abaixo da diagonal principal: " << diag << endl;

    return 0;
}
