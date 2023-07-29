#include <iostream>
#include <string>

std::string decimalToHexadecimal(int decimal) {
    if (decimal == 0) {
        return "0"; 
    } else if (decimal < 0) {
        return "-" + decimalToHexadecimal(-decimal); 
    } else {
        char hexDigits[] = "0123456789ABCDEF";
        std::string result;

        while (decimal > 0) {
            int remainder = decimal % 16;  
            result = hexDigits[remainder] + result;
            decimal /= 16;
        }

        return result;
    }
}

int main() {
    int decimal;
    std::cin >> decimal;

    std::string hexadecimal = decimalToHexadecimal(decimal);
    std::cout << hexadecimal << std::endl;

    return 0;
}

