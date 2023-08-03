//Escreva um programa em C++ que solicite ao usuário um número inteiro e exiba o triplo desse número

#include <iostream>

int main() {
    int numero;
    std::cout<<"digite um número";
    std::cin >> numero;

    int mult = numero * 3;

    std::cout << "O dobro é" << mult << std::endl;

    return 0;
}