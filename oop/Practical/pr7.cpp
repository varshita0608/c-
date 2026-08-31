#include <iostream>
using namespace std;
class Student {
private:
int rollNo;
string name;
static int count;
public:
void input() {
cout << "Enter Roll Number: ";
cin >> rollNo;
cout << "Enter Name: ";
cin >> name;
count++;
}
void display() {
cout << "Roll No: " << rollNo << endl;
cout << "Name: " << name << endl;
}
friend void showTotalStudents();
};
int Student::count = 0;
void showTotalStudents() {
cout << "\nTotal Students: " << Student::count << endl;
}
int main() {
Student s1, s2;
cout << "--- Enter Student 1 Details ---" << endl;
s1.input();
cout << "\n--- Enter Student 2 Details ---" << endl;
s2.input();
cout << "\n--- Student Details ---" << endl;
s1.display();
cout << endl;
s2.display();
showTotalStudents();
return 0;
}