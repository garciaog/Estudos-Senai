#include <iostream>
#include <algorithm> // Para a função sort
using namespace std;

#define SIZE 5

int main() {
    string vetor[SIZE];

    cout << "Insira " << SIZE << " paises que ja venceram uma Copa do mundo feminina: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> vetor[i];
    }

    // Ordenar o vetor em ordem alfabética
    sort(vetor, vetor + SIZE);

    cout << "Paises em ordem alfabetica: ";
    for (int i = 0; i < SIZE; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
