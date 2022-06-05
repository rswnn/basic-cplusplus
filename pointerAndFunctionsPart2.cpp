#include <iostream>
using namespace std;
// Example 2: Passing by reference using pointers
void swap(int* n1, int* n2) {
    // dereference
    int temp;
    temp = *n2;
    *n2 = *n1;
    *n1 = temp;
}

int main() {
    int a = 1, b = 2;

    cout << "Before Swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call swap function
    swap(&a, &b);

    cout << "After Swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}