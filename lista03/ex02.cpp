#include <iostream>
#include <iomanip>

using namespace std;

void media(int pessoas) {
  float salario, somaSalario = 0;
  int filhos, habitantes = pessoas;

  for (int i = 0; i < pessoas; i++) {
    cout << "Salário: ";
    cin >> salario;
    cout << "Filhos: ";
    cin >> filhos;

    somaSalario += salario;
    habitantes += filhos;
  }
  
  float mediaSalario = somaSalario / habitantes;

  cout << fixed << setprecision(2);
  cout << "Média salarial da população: R$ " << mediaSalario << endl;
}

int main() {
  int pessoas;

  cout << "Número de pessoas: ";
  cin >> pessoas;
  while (pessoas <= 0) {
    cin >> pessoas;
  }

  media(pessoas);

  return 0;
}