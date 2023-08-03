#include <iostream>
#include <cmath>
using namespace std;

// Exercício 1: Cálculo da área de um retângulo
double calcular_area_retangulo(double base, double altura) {
    return base * altura;
}

// Exercício 2: Verificação de número perfeito
bool verificar_numero_perfeito(int numero) {
    int soma = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }
    return soma == numero;
}

// Exercício 3: Conversão de Fahrenheit para Celsius
double converter_para_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// Exercício 4: Cálculo da média de uma sequência de números inteiros
double calcular_media_sequencia() {
    int numero_sequencia, soma = 0, contador = 0;
    double media;

    cout << "Digite uma sequência de números inteiros terminada em zero:" << endl;

    do {
        cin >> numero_sequencia;
        if (numero_sequencia != 0) {
            soma += numero_sequencia;
            contador++;
        }
    } while (numero_sequencia != 0);

    if (contador > 0) {
        media = static_cast<double>(soma) / contador;
        cout << "A média dos números digitados é: " << media << endl;
    } else {
        cout << "Nenhum número válido foi digitado." << endl;
    }

    return media;
}

// Exercício 5: Verificação de número primo (função recursiva)
bool verificar_numero_primo(int numero, int divisor = 2) {
    if (numero <= 2)
        return (numero == 2);
    if (numero % divisor == 0)
        return false;
    if (divisor * divisor > numero)
        return true;
    return verificar_numero_primo(numero, divisor + 1);
}

// Exercício 6: Verificação do tipo de triângulo
void verificar_tipo_triangulo(double lado1, double lado2, double lado3) {
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "É um triângulo equilátero." << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "É um triângulo isósceles." << endl;
        } else {
            cout << "É um triângulo escaleno." << endl;
        }
    } else {
        cout << "Não é possível formar um triângulo com esses valores." << endl;
    }
}

// Exercício 7: Sequência de Fibonacci até o valor lido
void imprimir_fibonacci(int n) {
    int primeiro = 0, segundo = 1, proximo;
    cout << "Sequência de Fibonacci até " << n << ":" << endl;
    cout << primeiro << ", " << segundo;
    proximo = primeiro + segundo;

    while (proximo <= n) {
        cout << ", " << proximo;
        primeiro = segundo;
        segundo = proximo;
        proximo = primeiro + segundo;
    }
    cout << endl;
}

// Exercício 8: Verificação de número palíndromo
bool verificar_numero_palindromo(int numero) {
    int original = numero, inverso = 0, digito;

    while (numero > 0) {
        digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero /= 10;
    }

    return original == inverso;
}

// Exercício 9: Encontrar o maior e o menor valor de uma sequência de números inteiros
void encontrar_maior_menor() {
    int numero, maior = INT_MIN, menor = INT_MAX;

    cout << "Digite uma sequência de números inteiros terminada em zero:" << endl;
    do {
        cin >> numero;
        if (numero != 0) {
            maior = max(maior, numero);
            menor = min(menor, numero);
        }
    } while (numero != 0);

    if (maior == INT_MIN && menor == INT_MAX) {
        cout << "Nenhum número válido foi digitado." << endl;
    } else {
        cout << "O maior número é: " << maior << endl;
        cout << "O menor número é: " << menor << endl;
    }
}

// Exercício 10: Simulação de lançamento de dado
int lancar_dado() {
    return rand() % 6 + 1;
}

int main() {
    // Exercício 1: Cálculo da área de um retângulo
    double base, altura, area;
    cout << "Exercício 1 - Cálculo da área de um retângulo" << endl;
    cout << "Digite a base do retângulo: ";
    cin >> base;
    cout << "Digite a altura do retângulo: ";
    cin >> altura;
    area = calcular_area_retangulo(base, altura);
    cout << "A área do retângulo é: " << area << endl;

    // Exercício 2: Verificação de número perfeito
    int numero_perfeito;
    cout << "\nExercício 2 - Verificação de número perfeito" << endl;
    cout << "Digite um número inteiro positivo: ";
    cin >> numero_perfeito;

    if (numero_perfeito <= 0) {
        cout << "O número deve ser positivo." << endl;
    } else {
        if (verificar_numero_perfeito(numero_perfeito)) {
            cout << numero_perfeito << " é um número perfeito." << endl;
        } else {
            cout << numero_perfeito << " não é um número perfeito." << endl;
        }
    }

    // Exercício 3: Conversão de Fahrenheit para Celsius
    double fahrenheit, celsius;
    cout << "\nExercício 3 - Conversão de Fahrenheit para Celsius" << endl;
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> fahrenheit;

    celsius = converter_para_celsius(fahrenheit);
    cout << "A temperatura em Celsius é: " << celsius << " graus Celsius" << endl;

    // Exercício 4: Cálculo da média de uma sequência de números inteiros
    double media = calcular_media_sequencia();

    // Exercício 5: Verificação de número primo (função recursiva)
    int numero_primo;
    cout << "\nExercício 
