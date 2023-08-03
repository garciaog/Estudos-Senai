#include <iostream>

int main() {

    float num1, num2;

    std::cout << "Digite um numero:";
    std::cin >> num1;
    std::cout << "Digite um numero:";
    std::cin >> num2;

    float soma = num1 + num2;                // soma = 8
    float subtracao = num1 - num2;           // subtracao = 2
    float multiplicacao = num1 * num2;       // multiplicacao = 15
    float divisao = num1 / num2;             // divisao = 1

    std::cout << "Soma: " << soma << std::endl;
    std::cout << "Subtração: " << subtracao << std::endl;
    std::cout << "Multiplicação: " << multiplicacao << std::endl;
    std::cout << "Divisão: " << divisao << std::endl;

    return 0;
}
