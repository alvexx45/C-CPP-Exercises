#include <iostream>

using namespace std;

double calculaS(int N) {
    double S = 0.0;

    for (int n = 1; n <= N; n++) {
        S += (static_cast<double>(n * n + 1)) / (n + 3);
    }

    return S;
}

int main() {
    int N;

    cout << "Valor inteiro positivo para N: ";
    cin >> N;

    if (N <= 0) {
        cout << "N deve ser um valor inteiro positivo." << endl;
        return 1;
    }

    double resultado = calculaS(N);
    cout << "O valor de S é: " << resultado << endl;

    return 0;
}
