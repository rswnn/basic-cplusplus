#include <iostream>
using namespace std;

class Room {
   private:
    double length;
    double breadth;
    double height;

   public:
    void initData(double len, double brth, double hgh) {
        length = len;
        breadth = brth;
        height = hgh;
    }
    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    Room room1;

    room1.initData(10.0, 20.0, 30.0);

    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}