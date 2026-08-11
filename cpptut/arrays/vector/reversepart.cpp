#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
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
    vector<int>v1;
    v1.push_back(10);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(2);
    v1.push_back(6);
    v1 .push_back(3);
    display(v1);
    vector<int>v2(v1.size());
    reversepart(0,3,v1);
    display(v1);

}