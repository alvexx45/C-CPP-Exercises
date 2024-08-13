#include <iostream>

using namespace std;

void triangulo(float x, float y, float z) {
    if (x <= 0 || y <= 0 || z <= 0 || x >= y + z || y >= x + z || z >= x + y) {
        cout << "Não é um triângulo" << endl;
    } else {
        if (x == y && y == z) {
            cout << "Triângulo equilátero" << endl;
        } else if (x == y || x == z || y == z) {
            cout << "Triangulo isósceles" << endl;
        } else {
            cout << "Triângulo escaleno" << endl;
        }
    }
}

int main() {
    float x, y, z;

    while (true) {
        cout << "Lados do triângulo (Valor negativo para encerrar): " << endl;
        cin >> x >> y >> z;

        if (x < 0 || y < 0 || z < 0) {
            break;
        }

        triangulo(x, y, z);
    }

    return 0;
}
