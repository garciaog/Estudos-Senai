#include <iostream>

using namespace std;

int main() {
    int distancia;

    cout << "Informe a distancia dos inimigos em metros";
    cin >> distancia;

     if (distancia > 100)
        cout << "Inimigo detectado, mas ainda não e uma ameaça iminente..." << endl;
    else
        cout << "Perigo muito proximo! Prepare-se para o combate!." << endl;

}