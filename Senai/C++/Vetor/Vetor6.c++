#include <iostream>
using namespace std;

#define SIZE 5

int main () {
    int gol_marcado[SIZE] = {3, 2, 1, 4, 3};
    int gol_sofrido[SIZE] = {5, 2, 2, 1, 2};

for (int partida = 0; partida < 5; partida++) {
    int saldo_gols = gol_marcado[partida] - gol_sofrido[partida];
    cout << "Partida " << partida +  1 << ": Saldo de gol = " << saldo_gols << endl;
                                              }
return 0;
            }