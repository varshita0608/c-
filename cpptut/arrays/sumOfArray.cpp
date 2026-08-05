#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"size"<<endl;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cout<<endl<<"element:";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       sum=sum+arr[i];
    }

   cout<<sum;
} 