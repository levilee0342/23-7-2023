#include <iostream>
using namespace std;

void insertElement(int arr[], int& size, int element) {
    int i = size - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = element;
    size++;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int newElement;
    cin >> newElement;

    insertElement(arr, size, newElement);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

