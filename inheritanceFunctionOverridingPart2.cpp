#include <iostream>
using namespace std;

// Example 2: C++ Access Overridden Function to the Base Class

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
    Derived obj1, obj2;

    obj1.print();

    cout << "Access from base" << endl;

    obj2.Base::print();

    return 0;
}