#include <iostream>
#include <iomanip>

using namespace std;

class Data {
    protected:
    int dia;
    int mes;
    int ano;

    public:
    
    Data(int dia, int mes, int ano) {
        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
    }

    ~Data() {}

    int getDia() const {
        return dia;
    }

    int getMes() const {
        return mes;
    }

    int getAno() const {
        return ano;
    }

    // void adicionarDias(int dias) {
    //     if (dias <= 0) throw "Número de dias adicionados deve ser maior que 0";
        
    //     dia += dias;

    //     if (dia > 31) {
    //         dia -= 31;
    //         mes++;
    //     }

    //     if (mes > 12) {
    //         mes -= 12;
    //         ano++;
    //     }
    // }

    // void decrementarDias(int dias) {
    //     if (dias <= 0) throw "Número de dias decrementados deve ser maior que 0";

    //     dia -= dias;

    //     if (dia < 1) {
    //         dia += 31;
    //         mes--;
    //     }

    //     if (mes < 1) {
    //         mes += 12;
    //         ano--;
    //     }
    // }

    Data operator+(int dias) const {
        if (dias <= 0) throw "Número de dias adicionados deve ser maior que 0";

        Data novaData = *this;
        novaData.dia += dias;

        while (novaData.dia > 31) {
            novaData.dia -= 31;
            novaData.mes++;
            if (novaData.mes > 12) {
                novaData.mes -= 12;
                novaData.ano++;
            }
        }

        return novaData;
    }

    Data operator-(int dias) const {
        if (dias <= 0) throw "Número de dias decrementados deve ser maior que 0";

        Data dataFinal = *this;
        dataFinal.dia -= dias;

        while (dataFinal.dia < 1) {
            dataFinal.dia += 31;
            dataFinal.mes--;
            if (dataFinal.mes < 1) {
                dataFinal.mes += 12;
                dataFinal.ano--;
            }
        }

        return dataFinal;
    }

    friend ostream& operator<<(ostream& os, const Data& data);
};

ostream& operator<<(ostream& os, const Data& data) {
    os << setfill('0') << setw(2) << data.getDia() << "/";
    os << setfill('0') << setw(2) << data.getMes() << "/";
    os << setfill('0') << setw(4) << data.getAno() << endl;

    return os;
}

int main() {
    Data data(20, 12, 2000);

    int dias;

    cout << "Data inicial: ";
    cout << data;

    cout << "Dias adcionados: ";
    cin >> dias;

    // data.adicionarDias(dias);

    Data novaData = data + dias;

    cout << "Nova data: ";
    cout << novaData;

    cout << "Dias à diminuir: ";
    cin >> dias;

    // data.decrementarDias(dias);

    Data dataFinal = novaData - dias;

    cout << "Data final: ";
    cout << dataFinal;

    return 0;
}