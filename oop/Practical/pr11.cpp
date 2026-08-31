#include <iostream>
using namespace std;

class Student
{
 int rollNo;
 int marks;

public:


 Student()
 {
rollNo = 0;
 marks = 0;
cout << "Constructor called" << endl;
 }

 void input()
 {
 cout << "Enter Roll No: ";
 cin >> rollNo;

cout << "Enter Marks: ";
 cin >> marks;
 }

 void display()
 {
 cout << "\nRoll No: " << rollNo << endl;
 cout << "Marks: " << marks << endl;
 }


 ~Student()
 {
 cout << "\nDestructor called" << endl;
}
};

int main()
{
Student s;

 s.input();
s.display();

return 0;
}
