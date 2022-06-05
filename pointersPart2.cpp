#include <iostream>
using namespace std;

int main() {
    int *pointVar, var;

    var = 5;
    pointVar = &var;

    cout << "Pointvar on memory : " << pointVar << endl;
    cout << "Pointvar get real value: " << *pointVar << endl;
    cout << "var : " << var << endl;

    return 0;
}