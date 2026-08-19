//tower of hanoi 
#include<iostream>
using namespace std;
void towerOfHanoi(int n, char a, char b, char c) {
    if(n==1){
        cout<<"Move disk 1 from "<<a<<" to "<<c<<endl;
        return;
    }
    else{
        towerOfHanoi(n-1, a, c, b);
    }
    cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<endl;
    towerOfHanoi(n-1, b, a, c);
}
int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    toh(n, 'A', 'B', 'C');
    return 0;
}