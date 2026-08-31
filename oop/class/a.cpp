//implement a program to demonstrate inline function, default arguements and function overloading or perfroming arithmetic operations using function overloading
#include<iostream>
using namespace std;

inline int add(int a, int b){
    return a+b;
}

int add(int a, int b, int c=0){
    return a+b+c;
}

int main(){
    cout<<add(5,10)<<endl;
    cout<<add(5,10,15)<<endl;
    return 0;
}