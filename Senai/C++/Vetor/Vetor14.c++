#include <iostream>
using namespace std;

#define SIZE 10

int main() {
    int vetor[SIZE] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int a = 0; // Inicialize 'a' com zero para evitar valores indeterminados

    // Acessando e exibindo os elementos do vetor
    cout << "Elementos do vetor:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << vetor[i] << " ";
        a = vetor[i] + a;
    }

    cout << "\nA soma dos numeros e: " << a << endl;

    return 0;
}
