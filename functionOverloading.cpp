#include <iostream>
using namespace std;

int sumFunc(int x, int y) {
    return x + y;
}

double sumFunc(double x, double y) {
    return x + y;
}

int main() {
    int resultSumInt = sumFunc(20, 20);
    double resultSumDouble = sumFunc(20.0, 20.0);

    cout << "Result sum integer : " << resultSumInt << "\n";
    cout << "Result sum double : " << resultSumDouble << "\n";

    return 0;
}