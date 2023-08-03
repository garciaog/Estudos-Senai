#include <iostream>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <ctime>

bool isPrime(int number) {
    if (number < 2) return false;
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

void convertTime(int seconds, int& hours, int& minutes, int& remainingSeconds) {
    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    remainingSeconds = seconds % 60;
}

bool isTriangular(int number) {
    int sum = 0;
    int i = 1;

    while (sum < number) {
        sum += i;
        i++;
    }

    return sum == number;
}

double calculatePi(int iterations) {
    double pi = 0.0;
    int sign = 1;

    for (int i = 0; i < iterations; ++i) {
        pi += sign * 4.0 / (2 * i + 1);
        sign *= -1;
    }

    return pi;
}

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        while (!std::isalnum(str[left])) {
            left++;
        }
        while (!std::isalnum(str[right])) {
            right--;
        }
        if (std::tolower(str[left]) != std::tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    // Pergunta 1: Exibir os divisores de um número inteiro positivo
    int number;
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> number;

    std::cout << "Divisores de " << number << ": ";
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    // Pergunta 2: Verificar se um número é primo usando a peneira de Eratóstenes
    std::cout << "Digite um número inteiro: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " é um número primo." << std::endl;
    } else {
        std::cout << number << " não é um número primo." << std::endl;
    }

    // Pergunta 3: Contar números pares e ímpares em uma sequência de números inteiros
    int evenCount = 0;
    int oddCount = 0;

    std::cout << "Digite uma sequência de números inteiros (digite 0 para encerrar): ";

    do {
        std::cin >> number;
        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    } while (number != 0);

    std::cout << "Números pares: " << evenCount << std::endl;
    std::cout << "Números ímpares: " << oddCount - 1 << std::endl; // Desconta o zero

    // Pergunta 4: Calcular a soma dos dígitos de um número inteiro positivo
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> number;

    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    std::cout << "A soma dos dígitos é: " << sum << std::endl;

    // Pergunta 5: Verificar se uma palavra ou frase é um palíndromo
    std::cin.ignore(); // Ignorar o caractere '\n' do buffer de entrada
    std::string input;
    std::cout << "Digite uma palavra ou frase: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "É um palíndromo!" << std::endl;
    } else {
        std::cout << "Não é um palíndromo!" << std::endl;
    }

    // Pergunta 6: Exibir todos os números primos menores ou iguais a um número inteiro
    std::cout << "Digite um número inteiro: ";
    std::cin >> number;

    std::cout << "Números primos menores ou iguais a " << number << ": ";
    for (int i = 2; i <= number; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    // Pergunta 7: Converter quantidade de tempo em segundos para horas, minutos e segundos
    int totalSeconds;
    std::cout << "Digite a quantidade de tempo em segundos: ";
    std::cin >> totalSeconds;

    int hours, minutes, seconds;
    convertTime(totalSeconds, hours, minutes, seconds);

    std::cout << "Tempo convertido: " << hours << " horas, "
              << minutes << " minutos, " << seconds << " segundos." << std::endl;

    // Pergunta 8: Verificar se um número é triangular
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> number;

    if (isTriangular(number)) {
        std::cout << number << " é um número triangular." << std::endl;
    } else {
        std::cout << number << " não é um número triangular." << std::endl;
    }

    // Pergunta 9: Simular um jogo de adivinhação
    std::srand(std::time(0)); // Seed para números aleatórios
    int secretNumber = std::rand() % 100 + 1;

    int guess;
    do {
        std::cout << "Adivinhe o número (entre 1 e 100): ";
        std::cin >> guess;

        if (guess < secretNumber) {
            std::cout << "Tente um número maior!" << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Tente um número menor!" << std::endl;
        } else {
            std::cout << "Parabéns! Você acertou!" << std::endl;
            break;
        }
    } while (true);

    // Pergunta 10: Calcular o valor aproximado de π (pi) utilizando a série de Leibniz
    std::cout << "Digite o número de iterações para calcular π: ";
    std::cin >> number;
    double piApproximation = calculatePi(number);
    std::cout << "Valor aproximado de π: " << piApproximation << std::endl;

    return 0;
}