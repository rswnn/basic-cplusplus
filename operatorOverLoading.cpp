#include <iostream>
using namespace std;

// Operator (Unary Operator) Overloading

class Count {
   private:
    int value;

   public:
    Count() : value(5) {}

    void operator++() {
        ++value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count;

    ++count;

    count.display();

    return 0;
}