
#include <iostream>
using namespace std;

const int SIZE = 4;

int main() {
    int gols = 0;
    string paises[SIZE] = {"Jogo 1", "Jogo 2", "Jogo 3", "Jogo 4"};
    int vetor[SIZE];

    cout << "Insira o numero de gols de cada partida da selecao Feminina:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << paises[i] << ": ";
        cin >> vetor[i];
    }


    for (int i = 0; i < SIZE; i++) {
    gols = vetor[i] + gols;
    }

    cout << "\nA soma dos gols e: " << gols << endl;
    return 0;
}

