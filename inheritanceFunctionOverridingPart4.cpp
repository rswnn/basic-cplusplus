#include <iostream>
using namespace std;

// Example 4: C++ Call Overridden Function Using Pointer

class Base {
   public:
    void print() {
        cout << "This Print from Base" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "This print from Derived class" << endl;
    }
};

int main() {
    Derived obj1;

    Base* objPtr = &obj1;

    objPtr->print();

    return 0;
}