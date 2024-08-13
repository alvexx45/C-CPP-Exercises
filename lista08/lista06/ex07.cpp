#include <iostream>
using namespace std;

const int LIN = 4;
const int COL = 6;

void preencher(int matriz[LIN][COL]) {
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            cout << "Digite o elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void soma(int A[LIN][COL], int B[LIN][COL], int S[LIN][COL]) {
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }
}

void sub(int A[LIN][COL], int B[LIN][COL], int D[LIN][COL]) {
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            D[i][j] = A[i][j] - B[i][j];
        }
    }
}

void imprimir(int matriz[LIN][COL]) {
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[LIN][COL];
    int B[LIN][COL];
    int S[LIN][COL];
    int D[LIN][COL];

    cout << "Preencha a matriz A:" << endl;
    preencher(A);

    cout << "Preencha a matriz B:" << endl;
    preencher(B);

    soma(A, B, S);
    cout << "Matriz S (A + B):" << endl;
    imprimir(S);

    sub(A, B, D);
    cout << "Matriz D (A - B):" << endl;
    imprimir(D);

    return 0;
}
