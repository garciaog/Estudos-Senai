#include <iostream>

using namespace std;

int main() {
    int x, y;

    cout << "Digite as coodernadas em X (horizontal): ";
    cin >> x;

    cout << "Digite as coodernadas em Y (vertical): ";
    cin >> y;

     if (x >= -100 && x <= 100 && y >= -50  && y <= 50 )
        cout << "Localização possivel do esconderijo do Coringa." << endl;
    else
        cout << "Coordenadas fora dos limites da cidade." << endl;

}