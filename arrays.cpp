#include <iostream>

using namespace std;

int main() {
    int arr[3] = {10, 21, 37};

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << "Index of " << i << " : " << arr[i] << "\n";
    }

    arr[1] = 100;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << "Index of " << i << " : " << arr[i] << "\n";
    }

    // Multi dimensional array 2D

    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"},
    };

    for (int i = 0; i < sizeof(letters) / sizeof(letters[0]); i++) {
        for (int j = 0; j < sizeof(letters[i]) / sizeof(letters[i][0]); j++) {
            cout << "Result of  : " << letters[i][j] << "\n";
        }
    }

    // 3D
    string array3D[2][2][2] = {
        {{"1", "2"}, {"3", "4"}},
        {{"5", "6"}, {"7", "8"}}};

    for (int i = 0; i < sizeof(array3D) / sizeof(array3D[0]); i++) {
        for (int j = 0; j < sizeof(array3D[i]) / sizeof(array3D[i][0]); j++) {
            for (int k = 0; k < sizeof(array3D[i][j]) / sizeof(array3D[i][j][0]); k++) {
                cout << "array of array3D : " << array3D[i][j][k] << "\n";
            }
        }
    }

    return 0;
}