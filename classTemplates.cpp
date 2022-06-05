#include <iostream>
using namespace std;

template <class T>

class Number {
   private:
    T num1;

   public:
    Number(T n) : num1(n) {}

    T getNum() {
        return num1;
    }
};

int main() {
    Number<int> numbInt(10);
    Number<double> numbDouble(107.23);
    Number<string> numbString("Nine");

    cout << "int number : " << numbInt.getNum() << endl;
    cout << "int double : " << numbDouble.getNum() << endl;
    cout << "int stirng : " << numbString.getNum() << endl;
    return 0;
}