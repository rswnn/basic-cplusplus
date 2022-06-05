#include <iostream>
using namespace std;

int main() {
    int* pointerVar;
    int var = 5;

    cout << "Var is : " << var << endl;
    cout << "Address of var (&var) : " << &var << endl;

    pointerVar = &var;

    cout << "PointerVar is : " << pointerVar << endl;
    cout << "Content of the address pointed to by pointvar (*pointVar) : " << *pointerVar << endl;

    return 0;
}