#include <iostream>
using namespace std;

int main()
{

    // Operator Comparison
    int num1 = 20;
    int num2 = 20;
    bool equalTo = num1 == num2;
    bool notEqual = num1 != num2;
    bool num1GreatherThanNum2 = num1 > num2;
    bool num1LessThanNum2 = num1 < num2;
    bool num1GreatherThanOrEqualToNum2 = num1 >= num2;
    bool num1LessThanOrEqualToNum2 = num1 <= num2;

    cout << "Num1 equal to num2 : " << equalTo << "\n";
    cout << "Num1 not equal num2 : " << notEqual << "\n";
    cout << "Num1 greather than num2 : " << num1GreatherThanNum2 << "\n";
    cout << "Num1 less than num2 : " << num1LessThanNum2 << "\n";
    cout << "Num1 greather than or equal num2 : " << num1GreatherThanOrEqualToNum2 << "\n";
    cout << "Num1 less than or equal num2 : " << num1LessThanOrEqualToNum2 << "\n";

    // String comparison

    string name1 = "Alex";
    string name2 = "Pedro";

    bool name1EqualToName2 = name1 == name2;
    bool name1NotEqualName2 = name1 != name2;

    cout << "name1 equal to name2 : " << name1EqualToName2 << "\n";
    cout << "name1 not equal name2 : " << name1NotEqualName2 << "\n";

    return 0;
}