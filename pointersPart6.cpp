#include <iostream>
using namespace std;

int main() {
    float defaultArr[5] = {10.0, 20.1, 20.33, 44.21, 55.9};
    float arr[5];

    cout << "Insert data using pointer notation" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        *(arr + i) = defaultArr[i];
    }

    cout << "Display data using pointers" << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << *(arr + i) << endl;
    }

    cout << "Display data without pointers" << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << arr[i] << endl;
    }

    return 0;
}