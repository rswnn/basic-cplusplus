#include <iostream>
using namespace std;

int main() {
    struct
    {
        string firstname;
        string lastname;
        int age;
        bool isMarried;
    } Person1, Person2;

    Person1.firstname = "Alex";
    Person1.lastname = "Pedro";
    Person1.age = 17;
    Person1.isMarried = false;

    cout << "Person1 firstname : " << Person1.firstname << "\n";
    cout << "Person1 lastname : " << Person1.lastname << "\n";
    cout << "Person1 age : " << Person1.age << "\n";
    cout << "Person1 is married : " << Person1.isMarried << "\n";

    Person2.firstname = "David";
    Person2.lastname = "Ferguso";
    Person2.age = 19;
    Person2.isMarried = false;

    cout << "Person2 firstname : " << Person2.firstname << "\n";
    cout << "Person2 lastname : " << Person2.lastname << "\n";
    cout << "Person2 age : " << Person2.age << "\n";
    cout << "Person2 is married : " << Person2.isMarried << "\n";

    return 0;
}