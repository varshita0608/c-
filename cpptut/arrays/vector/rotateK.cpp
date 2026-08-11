#include<iostream>
using namespace std;
void display(vector<int>&s){
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int>&v){
    while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
    }
}    
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    
    display(v);
    int k;
    cout<<endl<<"enter value of K";
    cin>>k;
    if(k>n) k=k% v.size(); //handle k larger than array size
    reversepart(0,v.size()-1-k,v);
    reversepart(v.size()-k,v.size()-1,v);
    reversepart(0,v.size()-1,v);
    display(v);
} 