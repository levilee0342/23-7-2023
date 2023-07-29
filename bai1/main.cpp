#include <iostream>
using namespace std;

int ROWS = 2; int COLS = 2;

int main() {
    int arr[ROWS][COLS];
    cin >> ROWS>> COLS;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += arr[i][j];
        }
    }

    cout << sum;
    return 0;
}

