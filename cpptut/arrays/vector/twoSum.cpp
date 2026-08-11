#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter size "<<endl;
    cin>>n;
    cout<<"Enter elements:  "<<endl;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }
    int target;
    cout<<"Enter target:  "<<endl;
    cin>>target;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==target){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}