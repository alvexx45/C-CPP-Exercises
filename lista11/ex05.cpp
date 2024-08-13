#include <iostream>

int** alocaMatrizZerada(int linhas, int colunas) {
    int** matriz = new int*[linhas];

    if (matriz == nullptr) {
        std::cerr << "Erro: Falha na alocação do vetor de ponteiros para as linhas." << std::endl;
        return nullptr;
    }

    for (int i = 0; i < linhas; ++i) {
        matriz[i] = new int[colunas];

        if (matriz[i] == nullptr) {
            std::cerr << "Erro: Falha na alocação da linha " << i << " da matriz." << std::endl;

            for (int j = 0; j < i; ++j) {
                delete[] matriz[j];
            }
            delete[] matriz;
            return nullptr;
        }

        for (int j = 0; j < colunas; ++j) {
            matriz[i][j] = 0;
        }
    }

    return matriz;
}

void liberaMatriz(int** matriz, int linhas) {
    if (matriz != nullptr) {
        for (int i = 0; i < linhas; ++i) {
            delete[] matriz[i];
        }
        delete[] matriz;
    }
}

int main() {
    int linhas, colunas;

    std::cout << "Digite o número de linhas da matriz: ";
    std::cin >> linhas;
    std::cout << "Digite o número de colunas da matriz: ";
    std::cin >> colunas;

    int** matriz = alocaMatrizZerada(linhas, colunas);

    if (matriz != nullptr) {
        std::cout << "Matriz com elementos zerados:" << std::endl;
        for (int i = 0; i < linhas; ++i) {
            for (int j = 0; j < colunas; ++j) {
                std::cout << matriz[i][j] << " ";
            }
            std::cout << std::endl;
        }

        liberaMatriz(matriz, linhas);
    }

    return 0;
}
