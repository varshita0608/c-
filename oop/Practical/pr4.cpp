#include <iostream>
using namespace std;
int main() {
int arr[5];
cout << "Enter 5 numbers: ";
for (int i = 0; i < 5; i++) {
cin >> arr[i];
}
cout << "Traversing array using auto and range-based for loop:\n";
for (auto x : arr) {
cout << x << " ";
}
return 0;
}