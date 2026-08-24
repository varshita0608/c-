#include<iostream>
#include<string>
using namespace std;
int main(){
    string st;
    cin>>st;
    int count =0;
    int n=st.length();
    for(int i=0;i<n;i++){
        if(n==1) break;
        if(n==2){
            count=1;
            break;
        }
        if(i==0){
            if(st[i]!=st[i+1]) count++;
        }
        else if(i==n-1){
            if(st[i]!=st[i-1]) count++;
        }
        else if((st[i]!=st[i+1]) && (st[i]!=st[i-1])){
            count++;
        }
    }
    cout<<count;
}