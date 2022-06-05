#include <iostream>
using namespace std;

// Example 2: Multiple Inheritance in C++ Programming

class Daddy {
   public:
    Daddy() {
        cout << "Im a father, I have a son the name is Boy" << endl;
    }
};

class Mommy {
   public:
    Mommy() {
        cout << "Im a mother, I have a son the name is Boy" << endl;
    }
};

class Child : public Daddy, public Mommy {};

int main() {
    Child child;
    return 0;
}