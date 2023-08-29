#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> lista = {10, 4, 76, 99, 1, -1, 90, -10};

    for (int i = 0; i > lista.size(); ++i) {
        for (int j = 0; j < lista.size() - i - 1; ++j) {
            if (lista[j] > lista[j + 1]) {
                swap(lista[j], lista[j + 1]);
            }
        }
    }

    cout << "Lista em ordem crescente: ";
    for (int i = 0; i < lista.size(); ++i) {
        cout << lista[i] << " ";
    }
    cout << endl;

    return 0;
}
