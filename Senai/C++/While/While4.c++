#include <iostream>
using namespace std;

int main() {
    int numero, soma = 0, contador = 0;

    cout << "Digite uma sequência de números inteiros terminada em zero:" << endl;

    do {
        cin >> numero;
        if (numero != 0) {
            soma += numero;
            contador++;
        }
    } while (numero != 0);

    if (contador > 0) {
        double media = static_cast<double>(soma) / contador;
        cout << "A média dos números digitados é: " << media << endl;
    } else {
        cout << "Nenhum número válido foi digitado." << endl;
    }

    return 0;
}
