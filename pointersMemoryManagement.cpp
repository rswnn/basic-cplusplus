#include <iostream>
using namespace std;

int main() {
    // decalare an int pointer
    int* pointerInt;

    // decalare an float pointer
    float* pointerFloat;

    pointerInt = new int;
    pointerFloat = new float;

    // assigning valie to the memory
    *pointerInt = 45;
    *pointerFloat = 45.45f;

    cout << *pointerInt << endl;
    cout << *pointerFloat << endl;

    // deallocate the memory

    delete pointerInt;
    delete pointerFloat;

    cout << *pointerInt << endl;
    cout << *pointerFloat << endl;

    return 0;
}