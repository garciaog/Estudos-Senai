#include <iostream>
using namespace std;

const int SIZE = 4;

int main() {

string jogadoras[SIZE] = {"Jogadora 1", "Jogadora 2", "Jogadora 3", "Jogadora 4"};
    float vetor[SIZE];

    // Preenchendo o vetor com números inteiros digitados pelo usuário
    cout << "Insira a altura de 4 jogadoras da " << SIZE << " selecao Feminina:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << jogadoras[i] << ": ";
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
    cout << "A maior jogadora tem: " << maior << endl;
    cout << "A menor jogadora tem: " << menor << endl;

    return 0;
}
