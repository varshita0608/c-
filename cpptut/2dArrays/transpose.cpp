#include<iostream>
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
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    cout<<endl;
    for(int i=0;i<m;i++){//print transpose
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }

    int t[m][n];
    for(int i=0;i<m;i++){//storing transpose
        for(int j=0;j<n;j++){
            t[i][j]=arr[j][i]<<;
        }
    }

}