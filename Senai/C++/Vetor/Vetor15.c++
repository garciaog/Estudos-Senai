#include <iostream>
using namespace std;

#define SIZE 6

int main() {
    int vetor[SIZE] = {1, 2, 3, 4, 5, 6};

    cout << "Vetor original: ";
    for (int i = 0; i < SIZE; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    // Inverter a ordem dos elementos
    int inicio = 0;
    int fim = SIZE - 1;
    
    while (inicio < fim) {
        // Troca os elementos nas posições inicio e fim
        int temp = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = temp;
        inicio++;
        fim--;
    }

    cout << "Vetor invertido: ";
    for (int i = 0; i < SIZE; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
