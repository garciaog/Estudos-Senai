//a
#include <iostream>

 int main () {
    // Declaração e inicialização das variáveis
    int numero1 = 5;
    int numero2 = 8;
    int numero3 = 12;

    float media;
    // Cálculo da média
    media = (numero1 + numero2 + numero3) / 3.0;
    // Exibição do resultado
    std::cout << "A média dos números é:" << media << std::endl;


//b

    int num;
    std::cout << "Digite um número inteiro: ";
    std::cin >> num;

    bool primo = true;

    if (num <= 1) {
        primo = false;
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) {
        std::cout << num << " é um número primo." << std::endl;
    } else {
        std::cout << num << " não é um número primo." << std::endl;
    }
 }

    