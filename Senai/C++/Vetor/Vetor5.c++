#include <iostream>
using namespace std;

#define SIZE 5

int main() {
int datas[SIZE];

cout << "Digite as datas dos jogos da fase da Copa do Mundo";
for (int i = 0; i < SIZE; i++) {
    cout << " Jogo " << i + 1 << ": ";
    cin >> datas[i];

}


int temp;
for (int i = 0; i < SIZE / 2; i++) {
    temp = datas[i];
    datas[i] = datas [SIZE - 1 - i];
    datas[SIZE - 1 - i] = temp;

}


cout << "\nVetor com as datas invertidas:\n";
for (int i = 0; i < SIZE; i++) {
    cout << datas[i] << " ";

}
cout << endl;

return 0;

}