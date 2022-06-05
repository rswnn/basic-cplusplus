#include <iostream>
using namespace std;

class ClassB;
class ClassA {
   private:
    int numA;
    friend int add(ClassA, ClassB);

   public:
    ClassA() : numA(12){};
};

class ClassB {
   private:
    int numB;

    friend int add(ClassA, ClassB);

   public:
    ClassB() : numB(1){};
};

int add(ClassA obj1, ClassB obj2) {
    return (obj1.numA + obj2.numB);
}

int main() {
    ClassA classA;
    ClassB classB;
    cout << "Sum : " << add(classA, classB) << endl;
    return 0;
}