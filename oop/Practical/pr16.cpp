//Develop a program using Virtual Functions to demonstrate runtime polymorphism with base class pointer
#include <iostream>
using namespace std;

// Base Class
class Animal {
public:
    // Marking the function as virtual enables dynamic binding (runtime polymorphism)
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
    
    // Virtual destructor to ensure proper cleanup of derived objects
    virtual ~Animal() {}
};

// Derived Class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived Class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal *ptr; // Base class pointer

    Dog d;
    Cat c;

    // Base class pointer pointing to Dog object
    ptr = &d;
    ptr->sound(); // Calls Dog's sound() at runtime

    // Base class pointer pointing to Cat object
    ptr = &c;
    ptr->sound(); // Calls Cat's sound() at runtime

    return 0;
}