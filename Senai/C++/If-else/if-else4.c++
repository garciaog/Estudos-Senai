#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;

    // 1. Condicional if - Verificar se um número é positivo:
    if (num > 0)
        cout << "O número é positivo." << endl;
    else
        cout << "O número é negativo ou zero." << endl;

    // 2. Condicional if - Verificar se um número é par:
    if (num % 2 == 0)
        cout << "O número é par." << endl;
    else
        cout << "O número é ímpar." << endl;

    // 3. Condicional if - Verificar se um número está no intervalo correto:
    if (num >= 0 && num <= 10)
        cout << "O número está no intervalo de 0 a 10." << endl;
    else
        cout << "O número não está no intervalo de 0 a 10." << endl;

    // Limpando o buffer para a leitura correta da próxima entrada
    cin.ignore();

    // 4. Condicional if - Verificar se uma string está vazia:
    string text;
    cout << "Digite um texto: ";
    getline(cin, text);

    if (!text.empty())
        cout << "O texto não está vazio." << endl;
    else
        cout << "O texto está vazio." << endl;

    // 5. Condicional if - Verificar se um número é positivo, negativo ou zero:
    if (num > 0)
        cout << "O número é positivo." << endl;
    else if (num < 0)
        cout << "O número é negativo." << endl;
    else
        cout << "O número é zero." << endl;

    // 6. Condicional if - Verificar se uma letra é uma vogal:
    char letter;
    cout << "Digite uma letra: ";
    cin >> letter;

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        cout << "A letra é uma vogal." << endl;
    else
        cout << "A letra é uma consoante." << endl;

    // 7. Condicional if - Verificar se um número é maior que 10 e menor que 20:
    if (num > 10 && num < 20)
        cout << "O número está no intervalo de 10 a 20." << endl;
    else
        cout << "O número não está no intervalo de 10 a 20." << endl;

    // 8. Condicional if - Verificar se uma pessoa é maior de idade:
    int idade;
    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade >= 18)
        cout << "Você é maior de idade." << endl;
    else
        cout << "Você é menor de idade." << endl;

    // 9. Condicional if - Verificar se um número é primo:
    bool is_prime = true;
    if (num < 2)
        is_prime = false;
    else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
    }

    if (is_prime)
        cout << num << " é um número primo." << endl;
    else
        cout << num << " não é um número primo." << endl;

    // 10. Condicional if - Verificar se um número é múltiplo de 5 e 7:
    if (num % 5 == 0 && num % 7 == 0)
        cout << "O número é múltiplo de 5 e 7." << endl;
    else
        cout << "O número não é múltiplo de 5 e 7." << endl;

    return 0;
}
