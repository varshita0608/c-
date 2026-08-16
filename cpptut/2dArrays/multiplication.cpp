#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter rows and colums for M1"<<endl;
    cin>>m>>n;
    int p,q;
    cout<<"enter rows and colums for M2"<<endl;
    cin>>p>>q;
    if(n==p){
        int a[m][n];
        int b[p][q];
        cout<<"enter elements for M1"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            cin>>a[i][j];
            }
        }
        cout<<"enter elements for M2"<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
            cin>>b[i][j];
            }
        }
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
            }
        cout<<"\n";
    }

    }
    else{
        cout<<"not valid for multiplication";
    }
}