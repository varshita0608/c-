#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int l,int r,int mid){
    int n=mid-l+1;
    int m=r-mid;
    vector<int>left(n);
    vector<int>right(m);
    for(int i=0;i<n;i++){
        left[i]=arr[l+i];
    }
    for(int j=0;j<m;j++){
        right[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n && j<m){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<n){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<m){
        arr[k]=right[j];
        j++;
        k++;
    }
}
void mergeSort(vector<int>&arr,int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,r,mid);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}