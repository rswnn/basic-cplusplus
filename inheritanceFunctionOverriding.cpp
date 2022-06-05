#include <iostream>
using namespace std;

// Example 1: C++ Function Overriding

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

    obj1.print();

    return 0;
}