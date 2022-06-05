#include <iostream>
using namespace std;

class ClassB;

class ClassA {
   private:
    int numA;

    friend class ClassB;

   public:
    ClassA() : numA(12) {}
};

class ClassB {
   private:
    int numbB;

   public:
    ClassB() : numbB(1) {}

    int add() {
        ClassA obj1;
        return obj1.numA + numbB;
    }
};

int main() {
    ClassB obj1;
    cout << "Sum : " << obj1.add();
    return 0;
}