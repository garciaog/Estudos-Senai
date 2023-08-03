//c
#include <iostream>
#include <string>

std::string inverterString(const std::string& str) {
    std::string reversedStr;
    int length = str.length();

    for (int i = length - 1; i >= 0; i--) {
        reversedStr += str[i];
    }

    return reversedStr;
}

int main() {
    std::string str;
    std::cout << "Digite uma string: ";
    std::getline(std::cin, str);

    std::string reversed = inverterString(str);
    std::cout << "String invertida: " << reversed << std::endl;

    return 0;
}