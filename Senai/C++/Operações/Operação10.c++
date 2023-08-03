//Considere o seguinte trecho de código em C++:

#include <iostream>

int main() { 
    int n; //Cria uma váriavel com valor indeterminavel com caracter "n"

    std::cout << "Digite um numero: "; //Pede um valor
    std::cin >> n; //Insere o valor que foi pedido da linha superior na váriavel "n"

    int square = n * n; //Cria a váriavel com nome "square" que multiplica o valor "n" por ele mesmo

    std::cout << "O quadrado do número é: " << square << std::endl; //Exibe o resultado 

    // colocar o "square" em portugues a fim didádico



    int num1 = 5; //Cria uma váriavel com valor determinado com caracter "num1" 
    int num2 = 10; //Cria uma váriavel com valor determinado com caracter "num2"

    int resultado_soma = num1 + num2; //Cria uma váriavel que o valor dela é a soma do "num1" e o "num2"
    int resultado_multiplicacao = num1 * num2; //Cria uma váriavel que o valor dela é a multiplicação do "num1" e o "num2"

    std::cout << "A soma de " << num1 << " e " << num2 << " é: " << resultado_soma << std::endl; //Exibe o resultado 
    std::cout << "A multiplicação de " << num1 << " e " << num2 << " é: " << resultado_multiplicacao << std::endl; //Exibe o resultado 

    return 0;
}