#include <iostream>

using namespace std;

 

class Student {

   int rollNo;

   float marks;

 

public:

   void input() {

       cout << "Enter Roll No: ";

       cin >> rollNo;

       cout << "Enter Marks: ";

       cin >> marks;

   }

 

   void display() {

       cout << "Roll No: " << rollNo

            << ", Marks: " << marks << endl;

   }

};

 

int main() {

   // Pointer to an object

   Student s;

   Student *ptr = &s;

 

   cout << "Enter details of student:\n";

   ptr->input();

 

   cout << "\nStudent Details:\n";

   ptr->display();

 

   // Array of objects

   Student students[2];

 

   cout << "\nEnter details of 2 students:\n";

   for (int i = 0; i < 2; i++) {

       students[i].input();

   }

 

   cout << "\nDetails of 2 students:\n";

   for (int i = 0; i < 2; i++) {

       students[i].display();

   }

 

   return 0;

}

 

 

 

 

 

 

