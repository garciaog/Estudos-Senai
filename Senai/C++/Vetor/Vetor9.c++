#include <iostream>
using namespace std;

const int SIZE = 5;

int main() {
    int vetor1[SIZE];
    int vetor2[SIZE];
    int resultado[SIZE];

    cout << "Insira " << SIZE << " valores para o primeiro vetor:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> vetor1[i];
    }

    cout << "Insira " << SIZE << " valores para o segundo vetor:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> vetor2[i];
    }

    // Realiza a soma dos elementos dos dois vetores e armazena no terceiro vetor
    for (int i = 0; i < SIZE; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }

    cout << "Resultado da soma dos dois vetores:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    return 0;
}
