#include <iostream>
using namespace std;

int main() {
    float arr[3];
    // declare pointer variable

    float *ptr;

    cout << "Displaying address using arrays" << endl;

    // use for loop to print addresses of all array element

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }
    ptr = arr;

    cout << "\nDisplaying address using pointers : " << endl;

    // use for loop to print addresses of all array elements
    // using pointer notation

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << "ptr + " << i << " = " << ptr + i << endl;
    }

    return 0;
}