#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("C:\\Users\\Senai-DS\\Documents\\Progama\\C++\\Texto.txt");
    if (!inputFile) {
        std::cerr << "Erro ao abrir o arquivo." << std::endl;
        return 1;
    }

    int wordCount = 0;
    std::string word;

    while (inputFile >> word) {
        wordCount++;
    }

    inputFile.close();

    std::cout << "Numero de palavras no arquivo: " << wordCount << std::endl;

    return 0;
}
