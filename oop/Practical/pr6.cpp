#include <iostream>
using namespace std;
class Student {
private:
int rollNo;
string name;
public:
Student() {
rollNo = 0;
name = "Unknown";
cout << "\nDefault Constructor ." << endl;
}
Student(int r, string n) {
rollNo = r;
name = n;
cout << "Parameterized Constructor " << endl;
}
Student(const Student &s) {
rollNo = s.rollNo;
name = s.name;
cout << "Copy Constructor" << endl;
}
void display() {
cout << "Roll No: " << rollNo << endl;
cout << "Name: " << name << endl;
}
~Student() {
cout << "Destructor for " << name << endl;
}
};
int main() {
int rollNo;
string name;
Student s1;
s1.display();
cout << "\nEnter Roll Number: ";
cin >> rollNo;
cout << "Enter Name: ";
cin >> name;
Student s2(rollNo, name);
cout << "\nStudent 2 Details:" << endl;
s2.display();
Student s3(s2);
cout << "\nStudent 3 (Copied) Details:" << endl;
s3.display();
cout << "\nEnd of program." << endl;
return 0;
}