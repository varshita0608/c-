#include <iostream>
using namespace std;
void callByValue(int x) {
x = x + 10;
cout << "Inside Call by Value: " << x << endl;
}
void callByReference(int &x) {
x = x + 10;
cout << "Inside Call by Reference: " << x << endl;
}
void callByAddress(int *x) {
*x = *x + 10;
cout << "Inside Call by Address: " << *x << endl;
}
int main() {
int a = 10;
int b = 10;
int c = 10;
cout << "Initial Values:" << endl;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
cout << "c = " << c << endl;
cout << "\nCall by Value:" << endl;
callByValue(a);
cout << "After function call, a = " << a << endl;
cout << "\nCall by Reference:" << endl;
callByReference(b);
cout << "After function call, b = " << b << endl;
cout << "\nCall by Address:" << endl;
callByAddress(&c);
cout << "After function call, c = " << c << endl;
return 0;
}