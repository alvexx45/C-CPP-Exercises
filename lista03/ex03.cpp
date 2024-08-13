#include <iostream>

using namespace std;

void ordenar(int a, int b, int c) {
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    cout << a << " " << b << " " << c << endl;
}

int main() {
    int n;
    int x, y, z;

    cout << "Número de conjuntos: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Informe 3 números: ";
        cin >> x >> y >> z;

        ordenar(x, y, z);
    }

    return 0;
}