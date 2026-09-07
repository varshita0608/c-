#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }
    Complex operator-() {
        return Complex(-real, -imag);
    }
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }
    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(5, 3);
    Complex c2(2, 4);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    Complex sum = c1 + c2;
    cout << "\nAfter Binary Operator (+): ";
    sum.display();

    Complex negative = -c1;
    cout << "After Unary Operator (-): ";
    negative.display();

    return 0;
}