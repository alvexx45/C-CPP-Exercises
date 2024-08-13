#include <iostream>

using namespace std;

const int T = 10;

void preencherMatriz(int M[T][T]) {
    cout << "Preencha a matriz " << T << "x" << T << ":" << endl;
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            cout << "Digite o elemento [" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }
}

void trocarLinhas(int M[T][T], int linha1, int linha2) {
    int temp[T];
    for (int j = 0; j < T; j++) {
        temp[j] = M[linha1][j];
        M[linha1][j] = M[linha2][j];
        M[linha2][j] = temp[j];
    }
}

void trocarColunas(int M[T][T], int coluna1, int coluna2) {
    for (int i = 0; i < T; i++) {
        int temp = M[i][coluna1];
        M[i][coluna1] = M[i][coluna2];
        M[i][coluna2] = temp;
    }
}

void trocarDiagonais(int M[T][T]) {
    for (int i = 0; i < T; i++) {
        int temp = M[i][i];
        M[i][i] = M[i][T - 1 - i];
        M[i][T - 1 - i] = temp;
    }
}

void trocarLinhaComColuna(int M[T][T], int linha, int coluna) {
    int temp[T];
    
    for (int j = 0; j < T; j++) {
        temp[j] = M[linha][j];
    }
    for (int i = 0; i < T; i++) {
        M[linha][i] = M[i][coluna];
    }
    for (int j = 0; j < T; j++) {
        M[j][coluna] = temp[j];
    }
}

void exibirMatriz(int M[T][T]) {
    cout << "Matriz Resultante:" << endl;
    for (int i = 0; i < T; i++) {
        for (int j = 0; j < T; j++) {
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int M[T][T];

    preencherMatriz(M);
    exibirMatriz(M);

    trocarLinhas(M, 1, 7);
    exibirMatriz(M);

    trocarColunas(M, 3, 9);
    exibirMatriz(M);

    trocarDiagonais(M);
    exibirMatriz(M);

    trocarLinhaComColuna(M, 4, 9);
    exibirMatriz(M);

    return 0;
}
