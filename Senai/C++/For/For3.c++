#include <iostream>
using namespace std;

#define SIZE 10 

int main() {
    int espectadores[SIZE];
    int jogosSuperior50k = 0;


    cout << "Digite o numero de espectadores presentes em cada jogo da Copa Feminina:\n";
    for (int i = 1; i <= SIZE; i++) {
      cout << "Jogo " << i << ": ";
      cin >> espectadores[i - 1];
    


    }

    for (int i = 0; i < SIZE; i++) {
        if (espectadores[i] > 50000) {
            jogosSuperior50k++;
        }
    }

    cout << "Numero de jogos com publico superior a 50.000: " << jogosSuperior50k << endl;

    return 0;

}
