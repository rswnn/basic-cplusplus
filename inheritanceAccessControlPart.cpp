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

class ProtectedDerived : protected Base {
   public:
    // function to access proteced member from base

    int getProt() {
        return prot;
    }

    // function to access public memeber from base
    int getPub() {
        return pub;
    }
};

int main() {
    ProtectedDerived obj1;
    cout << "Private Cannote be accessed." << endl;
    cout << "Protected = " << obj1.getProt() << endl;
    cout << "Public = " << obj1.getPub() << endl;
    return 0;
}