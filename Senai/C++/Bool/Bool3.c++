#include <iostream>
using namespace std;

int calcular_divisores(int numero) {
    int soma = 0;
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }
    return soma;
}

bool verificar_numero_perfeito(int numero) {
    int soma_divisores = calcular_divisores(numero);
    return soma_divisores == numero;
}

int main() {
    int numero;
    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "O numero deve ser positivo." << endl;
        return 1;
    }

    if (verificar_numero_perfeito(numero)) {
        cout << numero << " é um numero perfeito." << endl;
    } else {
        cout << numero << " nao e um nemero perfeito." << endl;
    }

    return 0;
}
