#include <iostream>
using namespace std;

void loading();
void calledHim(string name);

// defaultParameter
void myCountry(string country = "Indonesia");
// multiple parameters
void sumMultiParams(int num1, int num2, int num3);
// return value
int funcReturnANumber(int num1);
void greetings() {
    cout << "Hello World"
         << "\n";
}

int main() {
    greetings();
    loading();
    calledHim("Alex");
    myCountry();
    sumMultiParams(10, 20, 30);
    int result = funcReturnANumber(20);
    cout << "funcReturnANumber : " << result << "\n";
    return 0;
}
void loading() {
    cout << "Loading ..."
         << "\n";
}
void calledHim(string name) {
    cout << "Hello " << name << "\n";
}
void myCountry(string country) {
    cout << "I live in " << country << "\n";
}
void sumMultiParams(int num1, int num2, int num3) {
    cout << "Result of sum multiple params : " << num1 + num2 + num3 << "\n";
}
int funcReturnANumber(int num1) {
    return 10 * num1;
}
