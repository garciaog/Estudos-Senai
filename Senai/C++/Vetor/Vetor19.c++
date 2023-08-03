#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    int vetor[SIZE] = {2, 4, 7, 8, 10};

    cout << "Elementos impares do vetor: ";
    for (int i = 0; i < SIZE; i++) {
        if (vetor[i] % 2 != 0) {
            cout << vetor[i] << " ";
        }
    }
    cout << endl;

    return 0;
}