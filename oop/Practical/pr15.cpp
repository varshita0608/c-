#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Animal a;
    Dog d;

    cout << "Base Class Function: ";
    a.sound();

    cout << "Derived Class Function: ";
    d.sound();

    return 0;
}