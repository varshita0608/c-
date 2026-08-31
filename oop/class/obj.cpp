#include <bits/stdc++.h>
using namespace std;

class Example
{
public:
    int a;

    // Function to initialize value
    void getData(int x)
    {
        a = x;
    }

    // Function taking an object as argument
    void addTo(Example E)
    {
        a = a + E.a;
    }

    void display()
    {
        cout << "Value = " << a << endl;
    }
};

int main()
{
    // Create objects
    Example E1, E2;

    // Assign values
    E1.getData(10);
    E2.getData(20);

    cout << "Before addition:" << endl;
    cout << "E1: ";
    E1.display();
    cout << "E2: ";
    E2.display();

    // Pass object as argument
    E1.addTo(E2);

    cout << "\nAfter addition:" << endl;
    cout << "E1: ";
    E1.display();

    return 0;
}