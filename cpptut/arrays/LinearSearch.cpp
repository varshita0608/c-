#include<iostream>
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
    cout<<endl<<"Element to find";
    cin>>x;
    bool flag= false;
     for(int i=0;i<n;i++){
        if(arr[i]==x){
            // cout<<"found at "<<i;
            // break;
            bool flag= true;
        }
    }
    if(flag==true) cout<<"found";
    else cout<<"not found";
            
}