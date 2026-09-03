#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    bool flag=true;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            flag=false;
            break;
        }
    }
    if (flag==true) cout<<"Sorted";
    else cout<<"Not Sorted";
    return 0;
}