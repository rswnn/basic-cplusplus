#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:
    Count() : value(5) {}

    // Overload ++ when used as prefix without params
    void operator++() {
        ++value;
    }
    // Overload ++ when used as postfix
    void operator++(int) {
        value++;
    }

    void display() {
        cout << "Count : " << value << endl;
    }
};

int main() {
    Count count1;

    count1++;
    count1.display();

    ++count1;
    count1.display();

    return 0;
}