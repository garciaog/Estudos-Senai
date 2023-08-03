#include <iostream>

using namespace std;

void calcularFatorial(int numero) {
    if (numero < 0) {
        cout << "O fatorial de um número negativo não está definido." << endl;
        return;
    }

    if (numero == 0) {
        cout << "O fatorial de 0 é: 1" << endl;
        return;
    }

    int fatorial = 1;
    for (int i = 2; i <= numero; i++)
        fatorial *= i;

    cout << "O fatorial de " << numero << " é: " << fatorial << endl;
}

int main() {
    int numero;

    cout << "Digite um número inteiro para calcular o fatorial: ";
    cin >> numero;

    calcularFatorial(numero);

    return 0;
}
