#include<iostream>
using namespace std;

void digi(int n, int* ptr1 , int* ptr2){
    *ptr1=n%10;
    while(n>9){
        n/=10;
    }
    *ptr2=n;
    return;
}
int main(){
    int n;
    cin>>n;
    int lstdigi,fstdigi;
    int *ptr1=&lstdigi;
    int *ptr2=&fstdigi;
    digi(n,ptr1,ptr2);
    cout<<"last digit: "<<lstdigi<<endl<<"first digit : "<<fstdigi;
}
