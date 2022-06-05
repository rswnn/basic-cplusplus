#include <iostream>
using namespace std;

int main()
{

    bool haveACar = true;
    bool haveAGirlFriend = false;

    cout << "Have a car : " << haveACar << "\n";
    cout << "Have a girlfriend : " << haveAGirlFriend << "\n";

    // boolean expression
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
}