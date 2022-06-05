#include <iostream>
using namespace std;

int main()
{
    // Logical Operators

    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    int num4 = 40;

    bool logicalAnd = num1 < num2 && num3 < num4;
    bool logicalOr = num1 < num2 || num3 > num4;
    bool logicalNot = !(num1 < num2 && num3 < num4);

    cout << "Logical And (&&) : " << logicalAnd << "\n";
    cout << "Logical Or (||) : " << logicalOr << "\n";
    cout << "Logical Not (!) : " << logicalNot << "\n";

    return 0;
}