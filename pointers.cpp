#include <iostream>
using namespace std;

int main() {
    string food = "Hamburger";
    string* ptrFood = &food;

    // Output the value of food
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    // Output the memory address of food with the pointer
    cout << ptrFood << "\n";

    // Dereference

    cout << "Memory address " << ptrFood << "\n";
    cout << "Dereference " << *ptrFood << "\n";

    // Modify the Pointer Value

    *ptrFood = "Pizza";
    // Output the new value of the pointer (Pizza)
    cout << *ptrFood << "\n";

    // Output the new value of the food variable (Pizza)
    cout << food << "\n";
}