#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Digite sua idade "; //pede a idade ao usuário
    cin >> num;

    if (num >= 18)
        cout << "\nVoce e maior de idade. " << endl;
    else
        cout << "\nVoce nao e maior de idade. " << endl;
}

