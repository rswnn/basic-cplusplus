#include <iostream>

using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    // if condition
    if (num1 < num2) {
        cout << "num1 less than num2"
             << "\n";
    }
    // if else condition
    if (num1 > num2) {
        cout << "num1 less than num2"
             << "\n";
    } else {
        cout << "num2 greather than num1"
             << "\n";
    }
    // if else if condition
    if (num1 > num2) {
        cout << "num1 greather than num2"
             << "\n";
    } else if (num1 > num3) {
        cout << "num1 greather than num3"
             << "\n";
    } else {
        cout << "num1 less than num2 and num3"
             << "\n";
    }

    // if else shorthand
    string num1LessThanNum2 = num1 < num2 ? "num1 less than num2" : "num1 greather than num2";
    cout << "Short hand : " << num1LessThanNum2;

    return 0;
}