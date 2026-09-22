//implement a program demonstrating single and multi level inheritance using real world example

#include <iostream>
using namespace std;

// Single Level Inheritance
class Employee
{
public:
    string name;

    void showEmployee()
    {
        cout << "Employee Name: " << name << endl;
    }
};

class Manager : public Employee
{
public:
    void showManager()
    {
        cout << "Position: Manager" << endl;
    }
};

// Multi Level Inheritance
class Developer : public Employee
{
public:
    string language;

    void showDeveloper()
    {
        cout << "Position: Developer" << endl;
        cout << "Programming Language: " << language << endl;
    }
};

class SeniorDeveloper : public Developer
{
public:
    void showSeniorDeveloper()
    {
        cout << "Level: Senior Developer" << endl;
    }
};

int main()
{
    // Single Level Inheritance
    Manager m;
    m.name = "Rahul";

    cout << "Single Level Inheritance" << endl;
    m.showEmployee();
    m.showManager();

    cout << endl;

    // Multi Level Inheritance
    SeniorDeveloper s;
    s.name = "Aman";
    s.language = "C++";

    cout << "Multi Level Inheritance" << endl;
    s.showEmployee();
    s.showDeveloper();
    s.showSeniorDeveloper();

    return 0;
} **