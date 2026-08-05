#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<endl<<"element:";
        cin>>arr[i];
    }
    int x;
    cout<<"Enter val of X"<<endl;
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>x) count++;
    }
    cout<<endl<<"Count= "<<count;
}    