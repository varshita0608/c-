#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&s){
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
void swap(vector<int>&s,int i,int j){
    int temp=s[i];
    s[i]=s[j];
    s[j]=temp;
}
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(6);
    v.push_back(7);
    v.push_back(2);
    v.push_back(6);
    v.push_back(3);
    display(v);
    int i=0;
    int j=v.size()-1;
    while( i<=j){
    swap(v,i,j );
    i++;
    j--;
    }
    display(v);

}