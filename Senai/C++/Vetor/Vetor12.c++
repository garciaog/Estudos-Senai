#include <iostream>
#include <ctime>
using namespace std;


int main() {
    const int SIZE = 4;
    int vetor[SIZE];

while(true) {

    // Inicialização do gerador de números aleatórios com base no tempo atual
    srand(time(0));

    // Preenchendo o vetor com valores aleatórios entre 1 e 10
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % 10 + 1;
    }

    cout << "O vetor foi preenchido com valores aleatorios entre 1 e 10." << endl;

    // Solicitando o palpite do usuário
    int palpite;
    cout << "Adivinhe um dos numeros do vetor: ";
    cin >> palpite;

    // Verificando se o palpite está correto
    bool encontrado = false;
    for (int i = 0; i < SIZE; i++) {
        if (vetor[i] == palpite) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "Parabens! Seu palpite esta correto." << endl;
    } else {
        cout << "Que pena! Seu palpite esta incorreto." << endl;
    }
}
    return 0;
}
