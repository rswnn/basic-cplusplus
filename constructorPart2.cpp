#include <iostream>
using namespace std;

class WallWithParam {
   private:
    double length;
    double height;

   public:
    WallWithParam(double len, double hgt) {
        length = len;
        height = hgt;
    }

    // copy constructor
    WallWithParam(WallWithParam &obj) {
        length = obj.length;
        height = obj.height;
    }
    double calculateArea() {
        return length * height;
    }
};

int main() {
    WallWithParam wallWithParam(10, 20);
    WallWithParam wallWithParam2 = wallWithParam;

    cout << "Area of Wall 1: " << wallWithParam.calculateArea() << endl;
    cout << "Area of Wall 2: " << wallWithParam2.calculateArea();
    return 0;
}