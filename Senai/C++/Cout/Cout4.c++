#include <iostream>

using namespace std;

int main() {
    float velocidade, altitude;

  cout << "Digite a velocidade desejada (em km/h): ";
  cin >> velocidade;

  cout << "Digite a altitude desejada (em metros): ";
  cin >> altitude;

  cout << "Batwing decolando a " << velocidade << " km/h a " << altitude << " metros do solo." << endl;

    return 0;
}
