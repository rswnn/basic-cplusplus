#include <iostream>
using namespace std;

int main() {
    string food = "Hamburger";
    string &meal = food;

    cout << "Food is " << food << "\n";
    cout << "Meal is " << meal << "\n";

    // memory address
    cout << "memory address : " << &food;
}