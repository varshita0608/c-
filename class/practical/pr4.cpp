#include <iostream>
using namespace std;

void Merge(int a[],int l, int r, int mid){
    int n = mid -l + 1;
    int m = r - mid;
    int L[n],R[m];
    int i,j,k;
    for(i=0; i<n; i++){
        L[i]=a[l+i];
    }
    for(j=0; j<m; j++){
        R[j]=a[mid+j+1];
    }
    i=0;
    j=0;
    k=l;
    while(i<n && j<m){
        if(L[i]<R[j]){
            a[k]=L[i];
            i++;
            k++;
        }
        else{
            a[k]=R[j];
            j++;
            k++;
        }
    }

    while(i < n){
        a[k] = L[i];
        i++;
        k++;
    }

    while(j < m){
        a[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int A[],int l,int r)
{
    if(l<r){
        int mid=(l+r)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,r);
        Merge(A,l,r,mid);
    }
}

int main(){
    int A[]={3,1,4,2,7,6,5};
    MergeSort(A,0,6);
    for(int i=0;i<7;i++){
        cout<<A[i]<<" ";
    }
}