#include <iostream>

int main()       {
    int numero;
    while (true) {

    std::cout << "Insira um numero.";
    std::cin >> numero;

    for (int contador = 2; contador <= numero; contador++) {
        std::cout << contador << std::endl;
}
}
    return 0;
}