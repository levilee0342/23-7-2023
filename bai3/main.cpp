#include <iostream>

const int MAX_SIZE = 100; 

int main() {
    int arr[MAX_SIZE];
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int max1 = arr[0]; 
    int max2 = arr[0]; 

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if (max2 == max1) {
        std::cout << "-1";
    } else {
        std::cout<< max2 ;
    }

    return 0;
}

