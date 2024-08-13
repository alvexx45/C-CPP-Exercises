#include <iostream>

using namespace std;

int main() {
    double precoCompra, precoVenda;
    double totalCompra = 0, totalVenda = 0, totalLucro = 0;
    int lucroMenor = 0, lucroEntre = 0, lucroMaior = 0;

    while (true) {
        cout << "Preço de compra (0 para encerrar): ";
        cin >> precoCompra;
        
        if (precoCompra == 0) {
            break;
        }

        cout << "Preço de venda: ";
        cin >> precoVenda;

        double lucro = precoVenda - precoCompra;
        double percentualLucro = (lucro / precoCompra) * 100;

        if (percentualLucro < 10) {
            lucroMenor++;
        } else if (percentualLucro <= 20) {
            lucroEntre++;
        } else {
            lucroMaior++;
        }

        totalCompra += precoCompra;
        totalVenda += precoVenda;
        totalLucro += lucro;
    }
    cout << endl;
    cout << "Mercadorias com lucro < 10%: " << lucroMenor << endl;
    cout << "Mercadorias com lucro entre 10 e 20%: " << lucroEntre << endl;
    cout << "Mercadorias com lucro > 20%: " << lucroMaior << endl;
    cout << "Valor total de compra: R$ " << totalCompra << endl;
    cout << "Valor total de venda: R$ " << totalVenda << endl;
    cout << "Lucro total: R$" << totalLucro << endl;

    return 0;
}