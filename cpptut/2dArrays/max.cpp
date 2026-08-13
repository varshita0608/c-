#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]>max) max=arr[i][j];
        }
    }
    cout<<max;
}