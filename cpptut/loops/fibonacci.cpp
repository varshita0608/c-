#include<iostream>
using namespace std;
int main(){
    int n;     // 1 1 2 3 5 8 13 21 34 55 .....
    cin>>n;
    int a=1,b=1,sum=0;
    cout<<1<<" "<<1;
    for(int i=1;i<=n-2;i++){ //use n-2 because: ex- 5th position will print 13 instead of 5
        sum=a+b;
        a=b;
        b=sum;
        cout<<" "<<b;
    }
   
}