#include <iostream>
using namespace std;

class Wall {
   private:
    double length;

   public:
    Wall() {
        length = 5.5;
        cout << "Creating a wall." << endl;
        cout << "Length = " << length << endl;
    }
};

class WallWithParam {
   private:
    double length;
    double height;

   public:
    WallWithParam(double len, double hgt) {
        length = len;
        height = hgt;
    }
    double calculateArea() {
        return length * height;
    }
};

int main() {
    Wall wall;
    WallWithParam wallWithParam(10, 20);
    WallWithParam wallWithParam2(30, 20);

    cout << "Area of Wall 1: " << wallWithParam.calculateArea() << endl;
    cout << "Area of Wall 2: " << wallWithParam2.calculateArea();
    return 0;
}