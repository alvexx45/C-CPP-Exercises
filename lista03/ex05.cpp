#include <iostream>

using namespace std;

void conceito(float media) {
    if (media <= 39) {
        cout << "F";
    } else if (media <= 59) {
        cout << "E";
    } else if (media <= 69) {
        cout << "D";
    } else if (media <= 79) {
        cout << "C";
    } else if (media <= 89) {
        cout << "B";
    } else {
        cout << "A";
    }
}

int main() {
    int n;
    float media;

    cout << "Número de alunos: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Média do aluno " << i + 1 << ": ";
        cin >> media;

        conceito(media);
        cout << endl;
    }

    return 0;
}