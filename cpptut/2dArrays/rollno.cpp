#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int m;
    // cin>>m;
    int arr[4][2];
    for(int i=0;i<4;i++){ //rows
        for(int j=0;j<2;j++){ //columns
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}