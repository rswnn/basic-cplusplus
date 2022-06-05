#include <iostream>
using namespace std;

class Distance {
   private:
    int meter;

    friend int addFive(Distance);

   public:
    Distance() : meter(0) {}
};

// friend function definition
int addFive(Distance d) {
    // accessing private members from the friend function
    d.meter += 5;

    return d.meter;
}
int main() {
    Distance d;

    cout << "Call friend function : " << addFive(d) << endl;

    return 0;
}