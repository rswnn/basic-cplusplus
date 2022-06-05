#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main() {
    Distance *ptr, d;

    ptr = &d;

    ptr->feet = 100;
    ptr->inch = 20.0;

    cout << "Displaying Information : " << endl;
    cout << "Distance = " << ptr->feet << "feet " << ptr->inch << "inch";

    return 0;
}