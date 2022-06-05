#include <iostream>
using namespace std;

int main() {
    int var = 5;
    int* pointerVar = &var;

    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointerVar = " << *pointerVar << endl
         << endl;

    cout << "Changing value of var to 7:" << endl;
    var = 7;

    // pritn var
    cout << "var = " << var << endl;

    // print *pointerVar
    cout << "*pointerVar = " << *pointerVar << endl
         << endl;

    cout << "Changing value of *pointerVar to 16:" << endl;
    *pointerVar = 16;

    // pritn var
    cout << "var = " << var << endl;

    // print *pointerVar
    cout << "*pointerVar = " << *pointerVar << endl;

    return 0;
}