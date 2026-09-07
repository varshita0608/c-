#include<iostream>
using namespace std;

// int hcf(int a,int b){
//     int gcd=1;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             gcd=i;
//         }
//     }
//     return gcd;
// }
int hcf(int a,int b){
    int gcd=1;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            gcd=i;
            break;
        }
    }
    return gcd;
}

int main(){
    int x,y;
    cout<<"enter 1st number:";
    cin>>x;
    cout<<"enter 2nd number:";
    cin>>y;
    cout<<hcf(x,y);
}