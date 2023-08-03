// Escreva um programa em C++ que receba três números inteiros do usuário e exiba o maior entre eles

#include <iostream>

int main() {
    int a, b, c;
    int d = 0;

    std::cout << "digite um número";
    std::cin >> a;

    std::cout <<"digite um número";
    std::cin >> b;
    
    std::cout << "digite um número";
    std::cin >> c;

    if (a > b) d = a;
    else d = b;

    if (d < c) d = c;
    std::cout << "O mair número é" << d << std::endl;


    return 0;
         }