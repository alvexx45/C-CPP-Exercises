#include <iostream>

using namespace std;

bool positivo(int num) {
  return num > 0;
}

int main() {
  int n, num;

  cout << "Quantidade de números: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Número: ";
    cin >> num;

    if (positivo(num)) {
      cout << "Positivo" << endl;
    } else {
      cout << "Negativo" << endl;
    }
  }
}