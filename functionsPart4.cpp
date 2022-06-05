// Storage class
#include <iostream>
using namespace std;

// Global variable declaration
int c = 12;

void test();
void runStaticVariable();

int main() {
    c++;

    cout << c << "\n";
    test();

    runStaticVariable();
    runStaticVariable();

    return 0;
}

void test() {
    c++;

    cout << c << "\n";
}

void runStaticVariable() {
    static int var = 0;
    var++;

    cout << var << "\n";
}
