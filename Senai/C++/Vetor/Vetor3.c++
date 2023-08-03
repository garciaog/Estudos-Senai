
#include <iostream>
using namespace std;

const int SIZE = 8;

int main() {
    string paises[SIZE] = {"Brasil", "Franca", "Inglaterra", "Argentina", "Espanha", "Estados Unidos", "Japao", "Mexico"};
    int vetor[SIZE];

    // Preenchendo o vetor com números inteiros digitados pelo usuário
    cout << "Insira o numero de titulos de cada selecao dentre essas " << SIZE << " selecoes Femininas:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << paises[i] << ": ";
        cin >> vetor[i];
    }

    // Exibindo países que nunca venceram o torneio (com 0 títulos)
    cout << "\nPaises que nunca venceram uma Copa:\n";
    for (int i = 0; i < SIZE; i++) {
        if (vetor[i] == 0) {
            cout << paises[i] << endl;
        }
    }

    return 0;
}

