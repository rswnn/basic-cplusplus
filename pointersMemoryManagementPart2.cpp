#include <iostream>
using namespace std;

// Example 2: C++ new and delete Operator for Arrays

int main() {
    const int num = 5;

    float* ptr;
    float defaultGPA[num] = {3.1, 2.8, 2.7, 2.9, 3.3};

    ptr = new float[num];
    cout << "Enter GPA of students." << endl;

    for (int i = 0; i < num; i++) {
        *(ptr + i) = defaultGPA[i];
    }

    cout << "\nDisplaying GPA of students." << endl;

    for (int i = 0; i < num; i++) {
        cout << "Student " << i + 1 << " : " << *(ptr + i) << endl;
    }

    // release ptr on memory
    delete[] ptr;

    return 0;
}