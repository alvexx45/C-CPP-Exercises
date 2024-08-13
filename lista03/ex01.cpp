#include <iostream>

using namespace std;

void media(float n1, float n2, float n3, char tipo) {
    if (tipo == 'A') {
        float aritmetica = (n1 + n2 + n3) / 3;
        cout << "Média aritmética: " << aritmetica << endl;
    } else if (tipo == 'P') {
        float ponderada = (n1 * 5 + n2 * 3 + n3 * 2) / 10;
        cout << "Média ponderada: " << ponderada << endl;
    } else {
        cout << "Tipo inválido" << endl; 
    }
}

int main() {
    int n;
    float nota1, nota2, nota3;
    char tipo;

    cout << "Número de alunos: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Informe as notas do aluno " << i + 1 << ": ";
        cin >> nota1 >> nota2 >> nota3;

        cout << "Tipo de média (A/P): ";
        cin >> tipo;

        media(nota1, nota2, nota3, tipo);
    }

    return 0;
}