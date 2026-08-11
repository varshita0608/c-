#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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
    for(int i=0;i<v2.size();i++){
            int j= v1.size()-1-i; //the sum of both indices is always equal to size of vector, here i is for v2 and j for v1
            v2[i]=v1[j] ;
        
    }
    display(v2);

}