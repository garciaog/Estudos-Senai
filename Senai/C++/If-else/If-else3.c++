#include <iostream>

int main() 
{ int numero;
std::cout << "Digite um numero:";
std::cin >> numero;
 
if (numero > 0)
{
std::cout << "O numero e positivo e nao e zero." << std::endl;
}
else
{
std::cout << "O numero e negativo." << std::endl;
}


//b
    int a, b, c;
    int d = 0;

    std::cout << "digite um numero";
    std::cin >> a;

    std::cout <<"digite um numero";
    std::cin >> b;
    
    std::cout << "digite um numero";
    std::cin >> c;

    if (a > b) d = a;
    else d = b;

    if (d < c) d = c;
    std::cout << "O maior numero e" << d << std::endl;
    
}