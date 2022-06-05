#include <iostream>
using namespace std;

// Example 3: C++ new and delete Operator for Objects

class Student {
   private:
    int age;

   public:
    Student() : age(17) {}

    void getAge() {
        cout << "Age = " << age << endl;
    }
};

int main() {
    Student* student1 = new Student();

    student1->getAge();

    delete student1;
    return 0;
}