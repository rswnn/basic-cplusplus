#include <iostream>
using namespace std;

int main()
{
    // arithmetic
    int myNum1 = 10;
    int myNum2 = 20;

    int resultAddition = myNum1 + myNum2;
    int resultSubtraction = myNum1 - myNum2;
    int resultMultiplication = myNum1 * myNum2;
    int resultDivision = myNum2 / myNum1;
    int resultModulus = myNum2 % myNum1;
    int resultIncrement = myNum1++;
    int resultDecrement = myNum1--;

    cout << "Result Addtion : " << resultAddition << "\n";
    cout << "Result Subtraction : " << resultSubtraction << "\n";
    cout << "Result Multiplication : " << resultMultiplication << "\n";
    cout << "Result Division : " << resultDivision << "\n";
    cout << "Result Modulus : " << resultModulus << "\n";
    cout << "Result Increment : " << resultIncrement << "\n";
    cout << "Result Decrement : " << resultDecrement << "\n";

    // arithmetic assignment

    int additionAssignment = 20;
    additionAssignment += 20;

    int subtractionAssignment = 20;
    subtractionAssignment -= 20;

    int multiplicationAssignment = 20;
    multiplicationAssignment *= 20;

    int divisionAssignment = 20;
    divisionAssignment -= 20;

    cout << "Result Addtion Assignment : " << additionAssignment << "\n";
    cout << "Result Subtraction Assignment : " << subtractionAssignment << "\n";
    cout << "Result Multiplication Assignment : " << multiplicationAssignment << "\n";
    cout << "Result Division Assignment : " << divisionAssignment << "\n";

    return 0;
}