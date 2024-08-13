#include <iostream>

using namespace std;

int main() {
    int voto;
    int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0;
    int nulo = 0, branco = 0;

    cout << "Código do voto (0 para encerrar): " << endl;

    while (true) {
        cin >> voto;
    
        if (voto == 0) {
            break;
        }

        switch (voto) {
            case 1:
                cand1++;
                break;
            case 2:
                cand2++;
                break;
            case 3:
                cand3++;
                break;
            case 4:
                cand4++;
                break;
            case 5:
                nulo++;
                break;
            case 6:
                branco++;
                break;
            default:
                cout << "Voto inválido" << endl;
                break;
        }
    }

    cout << "Total de votos" << endl;
    cout << "Candidato 1: " << cand1 << endl;
    cout << "Candidato 2: " << cand2 << endl;
    cout << "Candidato 3: " << cand3 << endl;
    cout << "Candidato 4: " << cand4 << endl;
    cout << "Nulos: " << nulo << endl;
    cout << "Brancos: " << branco << endl;

    return 0;
}