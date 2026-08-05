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
    // int max=arr[0];
    int max= INT_MIN;
    for(int i=0;i<n;i++){
       if( max<arr[i]) max= arr[i];
    }
     cout<<endl<<"max element "<<max;
}