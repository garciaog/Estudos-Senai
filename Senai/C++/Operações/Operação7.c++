#include <iostream>

int main() {
    int choice;
    double num1, num2;

    std::cout << "Escolha a operacao matematica:\n";
    std::cout << "1. Adicao\n";
    std::cout << "2. Subtracao\n";
    std::cout << "3. Multiplicacao\n";
    std::cout << "4. Divisao\n";
    std::cout << "Digite o numero da operacao desejada (1, 2, 3 ou 4): ";
    std::cin >> choice;

    if (choice < 1 || choice > 4) {
        std::cout << "Escolha invalida. O programa sera encerrado.\n";
        return 1;
    }

    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;

    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    switch (choice) {
        case 1:
            std::cout << "Resultado da adicao: " << (num1 + num2) << std::endl;
            break;
        case 2:
            std::cout << "Resultado da subtracao: " << (num1 - num2) << std::endl;
            break;
        case 3:
            std::cout << "Resultado da multiplicacao: " << (num1 * num2) << std::endl;
            break;
        case 4:
            if (num2 == 0) {
                std::cout << "Nao e possivel dividir por zero.\n";
            } else {
                std::cout << "Resultado da divisao: " << (num1 / num2) << std::endl;
            }
            break;
    }

    return 0;
}
