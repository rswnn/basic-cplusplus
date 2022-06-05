#include <iostream>
using namespace std;

class Complex {
   private:
    float real;
    float imag;

   public:
    Complex() : real(0), imag(0) {}

    // change user input
    void input(float r, float i) {
        real = r;
        imag = i;
    }

    // Overload the + operator
    Complex operator+(const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void output() {
        if (imag < 0) {
            cout << "Output Complex number: " << real << imag << "i";

        } else {
            cout << "Output Complex number: " << real << "+" << imag << "i";
        }
    }
};

int main() {
    Complex complex1, complex2, complex3, result;

    complex1.input(10, 20);

    complex2.input(100, 200);

    complex3.input(1000, 2000);

    // complex1 calls the operator function
    // complex2 is passed as an argument to the function

    result = complex1 + complex2 + complex3;
    result.output();

    return 0;
}