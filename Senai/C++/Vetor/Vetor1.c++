#include <iostream>
using namespace std;

int main() {
    // 1. Vetor - Imprimir elementos do vetor:
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Elementos do vetor: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2. Vetor - Soma dos elementos:
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "A soma dos elementos do vetor é: " << sum << endl;

    // 3. Vetor - Preencher vetor com números pares:
    int arrPares[5];
    int num = 0;
    for (int i = 0; i < 5; i++) {
        arrPares[i] = num;
        num += 2;
    }
    cout << "Vetor preenchido com números pares: ";
    for (int i = 0; i < 5; i++) {
        cout << arrPares[i] << " ";
    }
    cout << endl;

    // 4. Vetor - Ordenar vetor em ordem crescente:
    int arrOrdenado[5] = {3, 1, 5, 2, 4};
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arrOrdenado[i] > arrOrdenado[j]) {
                int temp = arrOrdenado[i];
                arrOrdenado[i] = arrOrdenado[j];
                arrOrdenado[j] = temp;
            }
        }
    }
    cout << "Vetor ordenado em ordem crescente: ";
    for (int i = 0; i < 5; i++) {
        cout << arrOrdenado[i] << " ";
    }
    cout << endl;

    // 5. Vetor - Verificar se o vetor está vazio:
    if (sizeof(arr) / sizeof(arr[0]) > 0) {
        cout << "O vetor não está vazio." << endl;
    } else {
        cout << "O vetor está vazio." << endl;
    }

    // 6. Vetor - Encontrar o maior elemento:
    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "O maior elemento do vetor é: " << max << endl;

    // 7. Vetor - Cálculo da média:
    sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    int average = sum / 5;
    cout << "A média dos elementos do vetor é: " << average << endl;

    // 8. Vetor - Acessar elemento fora dos limites:
    cout << arr[10] << endl;

    // 9. Vetor - Preencher vetor com números ímpares:
    int arrImpares[5];
    num = 1;
    for (int i = 0; i < 5; i++) {
        arrImpares[i] = num;
        num += 2;
    }
    cout << "Vetor preenchido com números ímpares: ";
    for (int i = 0; i < 5; i++) {
        cout << arrImpares[i] << " ";
    }
    cout << endl;

    // 10. Vetor - Cálculo do produto dos elementos:
    int product = 1;
    for (int i = 0; i < 5; i++) {
        product *= arr[i];
    }
    cout << "O produto dos elementos do vetor é: " << product << endl;

    return 0;
}
