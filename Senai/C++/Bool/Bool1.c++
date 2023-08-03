#include <iostream>

int main() {
    bool expressao1 = true;
    bool expressao2 = false;
    bool resultadoAND = (expressao1 && expressao2);
    bool resultadoOR = (expressao1 || expressao2);
    bool resultadoNOT = !expressao2;
    
    std::cout << "Resultado AND: " << std::boolalpha << resultadoAND << std::endl;
    std::cout << "Resultado OR: " << std::boolalpha << resultadoOR << std::endl;
    std::cout << "Resultado NOT: " << std::boolalpha << resultadoNOT << std::endl;
    
    return 0;
}
