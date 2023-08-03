#include <iostream>
using namespace std;

#define SIZE 5

int main() {
    char vetor[SIZE];

    cout << "Digite " << SIZE << " letras do alfabeto: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> vetor[i];
    }

    char letraProcurada;
    cout << "Digite a letra que deseja procurar: ";
    cin >> letraProcurada;

    bool encontrada = false;
    for (int i = 0; i < SIZE; i++) {
        if (vetor[i] == letraProcurada) {
            encontrada = true;
            break;
        }
    }

    if (encontrada) {
        cout << "A letra '" << letraProcurada << "' foi encontrada no vetor." << endl;
    } else {
        cout << "A letra '" << letraProcurada << "' nao foi encontrada no vetor." << endl;
    }

    return 0;
}
