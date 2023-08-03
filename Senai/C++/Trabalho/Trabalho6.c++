#include <iostream>
using namespace std;

int main() {
    //1  
    int count = 1;
    while (count <= 5) {
        cout << count << endl;
        count++;
    }

    //2
    string password;
    do {
        cout << "Digite a senha: ";
        cin >> password;
    } while (password != "secreto");

    cout << "Senha correta!" << endl;

    //3
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    //4
    int sum = 0;
    int num = 1;
    while (num <= 10) {
        sum += num;
        num++;
    }
    cout << "A soma dos 10 primeiros números é: " << sum << endl;

    //5 
    int count2 = 0;
    do {
        cout << count2 << endl;
        count2++;
    } while (count2 < 10);

    //6
    int my_list[] = {1, 2, 3, 4, 5};
    int size = sizeof(my_list) / sizeof(my_list[0]);
    for (int i = 0; i < size; i++) {
        cout << my_list[i] << endl;
    }

    //7
    int num_prime = 7;
    bool is_prime = true;
    int i = 2;

    while (i <= num_prime / 2) {
        if (num_prime % i == 0) {
            is_prime = false;
            break;
        }
        i++;
    }

    if (is_prime) {
        cout << num_prime << " é um número primo." << endl;
    } else {
        cout << num_prime << " não é um número primo." << endl;
    }

    //8
    int num_fact = 5;
    int factorial = 1;
    int j = 0;
    do {
        j++;
        factorial *= j;
    } while (j < num_fact);
    cout << "O fatorial de " << num_fact << " é " << factorial << endl;

    //9
    string text = "Loop For";
    for (int char_index = 0; char_index < text.length(); char_index++) {
        cout << text[char_index] << endl;
    }

    //10
    string word = "level";
    bool is_palindrome = true;
    int k = 0;
    while (k < word.length() / 2) {
        if (word[k] != word[word.length() - k - 1]) {
            is_palindrome = false;
            break;
        }
        k++;
    }
    if (is_palindrome) {
        cout << word << " é um palíndromo." << endl;
    } else {
        cout << word << " não é um palíndromo." << endl;
    }

    return 0;
}
