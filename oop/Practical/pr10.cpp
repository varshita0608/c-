#include <iostream>

using namespace std;

 

class Student

{

    int rollNo;

    int marks;

 

public:

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

};

 

int main()

{

   

    Student *ptr = new Student;

 

    cout << "Enter Student Details:" << endl;

    ptr->input();

 

    cout << "\nStudent Details:" << endl;

    ptr->display();

 

   

    delete ptr;

 

    cout << "\nMemory released successfully." << endl;

 

    return 0;

}