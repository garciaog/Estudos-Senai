#include <iostream>
#include <cctype> // Incluir a biblioteca para a função toupper
using namespace std;

#define SIZE 5

int main() {
    while (true) {
        string vetor[SIZE] = {"BR", "ANG", "USA", "ARG", "ITA"};

        string letraProcurada;
        cout << "Digite a sigla que deseja procurar: ";
        cin >> letraProcurada;

        // Converter a string inserida pelo usuário para maiúsculo
        for (char & maiu : letraProcurada) {
            maiu = toupper(maiu);
        }

        bool encontrada = false;
        for (int i = 0; i < SIZE; i++) {
            if (vetor[i] == letraProcurada) {
                encontrada = true;
                break;
            }
        }

        if (encontrada) {
            cout << "O Pais sediou uma Copa do Mundo Feminina." << endl;
        } else {
            cout << "O Pais nao sediou uma Copa do Mundo Feminina." << endl;
        }
    }

    return 0;
}


