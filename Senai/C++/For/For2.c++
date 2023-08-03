#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    int vetor[SIZE];

    cout << "Insira " << SIZE << " numeros: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> vetor[i];
    }

    for (int i = 0; i < SIZE; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
