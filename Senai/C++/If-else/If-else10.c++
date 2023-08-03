#include <iostream>

using namespace std;

int main() {
    int vilao, heroi;

    cout << "Digite o numero de viloes que o batman derrotou: ";
    cin >> vilao;

    cout << "Digite o numerode herois que o batman salvou: ";
    cin >> heroi;

    if (heroi > vilao)
        cout << "Ele salvou mais herois do que derrotou viloes." << endl;
    else
        cout << "Ele derrotou mais viloes do que salvou herois." << endl;

}