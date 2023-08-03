#include <iostream>
#include <string>

using namespace std;

#define SIZE 5

int main() {
string selecoes[SIZE];

cout << "Digite os nomes das selecoes que participaram da Copa do Mundo Feminina";
for (int i = 0; i < SIZE; i++) {
    cout << " Seleção " << i + 1 << ":";
    cin.ignore();
    getline(cin, selecoes[i]);
}

cout << "\n Nomes das selecoes em ordem inversa: \n";
for (int i = SIZE - 1; i >= 0; i--) {
    cout << selecoes[i] << endl;
}
return 0;
}
