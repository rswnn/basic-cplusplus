#include <iostream>
using namespace std;

// Example 1: Passing by reference without pointers

void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main() {
    // intitalize variable

    int a = 1, b = 2;

    cout << "Before Swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call swap function
    swap(a, b);

    cout << "After Swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}