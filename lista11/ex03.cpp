#include <iostream>
#include <string>

using namespace std;

int contar(const string& strPrinc, const string& strSec) {
    int cont = 0;
    size_t pos = 0;

    while ((pos = strPrinc.find(strSec, pos)) != string::npos) {
        ++cont;
        pos += strSec.length();
    }

    return cont;
}

int main() {
    string princ, sec;

    cout << "Primeira string: ";
    getline(cin, princ);

    cout << "Segunda string: ";
    getline(cin, sec);

    int ocorrencias = contar(princ, sec);

    cout << "A string \"" << sec << "\" aparece " << ocorrencias << " vezes na string principal." << endl;

    return 0;
}
