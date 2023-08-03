#include <iostream>
using namespace std;

const int SIZE = 7;

int main() {
    float vetor[SIZE];

    // Preenchendo o vetor com números reais digitados pelo usuário
    cout << "Insira " << SIZE << " numeros reais: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> vetor[i];
    }

    // Inicializando as variáveis para armazenar o maior e o menor valor do vetor
    float maior = vetor[0];
    float menor = vetor[0];

    // Procurando o maior e o menor valor no vetor
    for (int i = 1; i < SIZE; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    // Exibindo o maior e o menor valor do vetor
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;

    return 0;
}
