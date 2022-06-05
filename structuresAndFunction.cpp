#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    float salary;
};

//  Returning structure from function in C++
Person getData(Person);

void displayPerson(Person);

int main() {
    Person person, temp, p;

    person.name = "Riswan";
    person.age = 20;
    person.salary = 2000.0;

    displayPerson(person);
    cout << "\n--------------------------" << endl;

    temp = getData(p);
    p = temp;
    displayPerson(p);

    return 0;
}

void displayPerson(Person person) {
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Salary: " << person.salary;
}

Person getData(Person person) {
    person.name = "Bella";
    person.age = 30;
    person.salary = 23201.7;

    return person;
}