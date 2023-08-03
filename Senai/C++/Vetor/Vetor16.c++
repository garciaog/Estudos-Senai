#include <iostream>
using namespace std;

#define SIZE 4

int main() {
    int vetor[SIZE];
    cout << "Insira a idade de " << SIZE << " jogadoras da seleção feminina:" << endl;
    int media;

    // Preenchendo o vetor com as idades digitadas pelo usuário
    for (int i = 0; i < SIZE; i++) {
        cin >> vetor[i];
    }

    // Calculando e exibindo a média das idades
    int soma = 0;
    for (int i = 0; i < SIZE; i++) {
        soma = soma + vetor[i];
        // Removemos a linha desnecessária que atribuía o valor atual do vetor para a variável "a"
        // a = vetor[i];
    }

    cout << "A soma das idades e:" << endl;
    cout << soma << endl;

    

    // Dividindo a soma pelo tamanho do vetor para calcular a média corretamente
    media = soma / SIZE;
    cout << "\nA media das idades é: " << media << endl;

    return 0;

}


