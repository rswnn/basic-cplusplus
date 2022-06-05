#include <iostream>
using namespace std;

// Example 3: C++ Call Overridden Function From Derived Class

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
        Base::print();
    }
};

int main() {
    Derived obj1;

    obj1.print();

    return 0;
}