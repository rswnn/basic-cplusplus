#include <iostream>
using namespace std;
// Example 2: C++ protected Inheritance

class Base {
   private:
    int pvt = 1;

   protected:
    int prot = 2;

   public:
    int pub = 3;

    // function to access private member
    int getPVT() {
        return pvt;
    }
};

class PrivateDerived : private Base {
   public:
    int getProt() {
        return prot;
    }

    // function to access private member
    int getPub() {
        return pub;
    }
};

int main() {
    PrivateDerived obj1;

    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << obj1.getProt() << endl;
    cout << "Public = " << obj1.getPub() << endl;
}