#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int elements=m*n;
    int count = 0;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc;j<=maxc && count<elements;j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;
        //down
        for(int i=minr;i<=maxr && count<elements;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        //left
        for(int j=maxc;j>=minc && count<elements;j--){
            cout<<arr[maxr][j]<<" ";
            count++;
        }
        maxr--;
        //top
        for(int i=maxr;i>=minr && count<elements;i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }
}    