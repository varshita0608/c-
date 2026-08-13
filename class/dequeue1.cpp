//l=2,r=4,max=6
//f is added to the right
//2 letters on the right are deleted
//k,l,m are added to left
//one letter from left is deleted
//r is added to the left
//s is added to the right
//p is added to the right
#include <iostream>
using namespace std;

#define n 6

int dq[n];
int f = -1;
int r = -1;


void insertRight() {
    int val;
    if ((f == 0 && r == n - 1) || (f == r + 1)) {
        cout << "overflow\n";
        return;
    }

    cin >> val;

    if (f == -1) {
        f = r = 0;
    }
    else if (r == n - 1) {
        r = 0;
    }
    else {
        r++;
    }

    dq[r] = val;
}

// insert at left
void insertLeft() {
    int val;
    if ((f == 0 && r == n - 1) || (f == r + 1)) {
        cout << "overflow\n";
        return;
    }

    cin >> val;

    if (f == -1) {
        f = r = 0;
    }
    else if (f == 0) {
        f = n - 1;
    }
    else {
        f--;
    }

    dq[f] = val;
}


void deleteLeft() {
    if (f == -1) {
        cout << "underflow\n";
        return;
    }

    cout << dq[f] << endl;

    if (f == r) {
        f = r = -1;
    }
    else if (f == n - 1) {
        f = 0;
    }
    else {
        f++;
    }
}

// delete from right
void deleteRight() {
    if (r == -1) {
        cout << "underflow\n";
        return;
    }

    cout << dq[r] << endl;

    if (f == r) {
        f = r = -1;
    }
    else if (r == 0) {
        r = n - 1;
    }
    else {
        r--;
    }
}

// display
void display() {
    if (f == -1) {
        cout << "deque is empty\n";
        return;
    }

    int i = f;
    while (true) {
        cout << dq[i] << " ";
        if (i == r) break;
        i = (i + 1) % n;
    }
    cout << endl;
}

int main() {
    int x;

    while (true) {
        cout << "\n1.Insert Left\n2.Insert Right\n3.Delete Left\n4.Delete Right\n5.Display\n6.Exit\n";
        cin >> x;

        switch (x) {
            case 1:
                insertLeft();
                break;
            case 2:
                insertRight();
                break;
            case 3:
                deleteLeft();
                break;
            case 4:
                deleteRight();
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }
}