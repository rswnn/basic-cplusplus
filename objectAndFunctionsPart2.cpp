#include <iostream>
using namespace std;

class Student {
   public:
    double mark1;
    double mark2;
};

Student createStudent() {
    Student student1;
    student1.mark1 = 90.0;
    student1.mark2 = 10.0;

    // print member variables of Student
    cout << "Marks 1 = " << student1.mark1 << endl;
    cout << "Marks 2 = " << student1.mark2 << endl;

    return student1;
}

int main() {
    Student student;
    student = createStudent();
    return 0;
}