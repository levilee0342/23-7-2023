#include <iostream>
#include <string>

int hexCharToDecimal(char hexChar) {
    if (hexChar >= '0' && hexChar <= '9') {
        return hexChar - '0';
    } else if (hexChar >= 'A' && hexChar <= 'F') {
        return hexChar - 'A' + 10;
    } else if (hexChar >= 'a' && hexChar <= 'f') {
        return hexChar - 'a' + 10;
    } else {
        return -1; 
    }
}

int hexadecimalToDecimal(const std::string& hexadecimal) {
    int decimal = 0;

    for (char hexChar : hexadecimal) {
        int value = hexCharToDecimal(hexChar);
        if (value == -1) {
            std::cout << "-1" ;
            return -1;
        }
        decimal = decimal * 16 + value;
    }

    return decimal;
}

int main() {
    std::string hexadecimal;
    std::cin >> hexadecimal;

    int decimal = hexadecimalToDecimal(hexadecimal);
    if (decimal != -1) {
        std::cout << decimal << std::endl;
    }

    return 0;
}

