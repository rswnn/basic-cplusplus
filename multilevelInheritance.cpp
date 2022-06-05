#include <iostream>
using namespace std;

// Multilevel inheritance

class A {
   public:
    void display() {
        cout << "Base class content." << endl;
    }
};

class B : public A {};
class C : public B {};

int main() {
    C obj1;

    obj1.display();

    return 0;
}