#include <iostream>
#include <string>
using namespace std;
class Student {
private:
int studentID;
string studentName;
float marks;
public:
// Function to input student details
void addStudent() {
cout << "Enter Student ID: ";
cin >> studentID;
cin.ignore();
cout << "Enter Student Name: ";
getline(cin, studentName);
cout << "Enter Marks: ";
cin >> marks;
}
// Function to display student details
void displayStudent() {
cout << "\nStudent Details\n";
cout << "ID : " << studentID << endl;
cout << "Name : " << studentName << endl;
cout << "Marks : " << marks << endl;
}
// Function to update marks
void updateMarks(float newMarks) {
marks = newMarks;
}
};
int main() {
Student s1;
s1.addStudent();
s1.displayStudent();
float newMarks;
cout << "\nEnter Updated Marks: ";
cin >> newMarks;
s1.updateMarks(newMarks);
cout << "\nUpdated Student Record:";
s1.displayStudent();
return 0;
}