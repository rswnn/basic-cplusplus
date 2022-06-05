#include <iostream>
using namespace std;

int main()
{

    /* meaning of ten number is you have tenNumber
    name as integer type(INT) and assign it the value 10
    */
    int tenNumber = 10;

    cout << tenNumber << "\n";

    // also you can create new variable without assigning the value
    int tenNumberWithoutAssigning;
    tenNumberWithoutAssigning = 10;

    cout << tenNumberWithoutAssigning << "\n";

    /* when you assign new value to exixting variable,
       it will overwrite previous value
    */
    tenNumber = 15;

    cout << tenNumber << " tenNumber to 15";

    return 0;
}