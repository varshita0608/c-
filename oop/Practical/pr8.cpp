#include <iostream>

using namespace std;

 

class Complex {

   int real, imag;

 

public:

 

   Complex(int r = 0, int i = 0) {

       real = r;

       imag = i;

   }

 

   

   void display() const {

       cout << real << " + " << imag << "i" << endl;

   }

 

   

   Complex add(const Complex &c) const {

       

       return Complex(real + c.real, imag + c.imag);

   }

 

 

   Complex subtract(const Complex &c) const {

       

       return Complex(real - c.real, imag - c.imag);

   }

};

 

int main() {

   Complex c1(5, 3), c2(2, 4);

 

   cout << "First complex number: ";

   c1.display();

 

   cout << "Second complex number: ";

   c2.display();

 

   

   Complex sum = c1.add(c2);

   Complex diff = c1.subtract(c2);

 

   cout << "Sum: ";

   sum.display();

 

   cout << "Difference: ";

   diff.display();

 

   return 0;

}

