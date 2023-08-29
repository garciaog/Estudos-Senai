#include <iostream>
#include <vector>


int main() {
    std::vector<std::string> lista = {"maçã", "alface", "mamão", "feijão", "arroz", "limão"};

    for (int i = 0; i < lista.size(); ++i) {
        for (int j = 0; j < lista.size() - i - 1; ++j) {
            if (lista[j] > lista[j + 1]) {
                std::swap(lista[j], lista[j + 1]);
            }
        }
    }

    std::cout << "Lista em ordem Alfabetica: ";
    for (int i = 0; i < lista.size(); ++i) {
        std::cout << lista[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
