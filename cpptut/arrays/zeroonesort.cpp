#include<iostream>
#include<vector>
using namespace std;
// void sort01 (vector<int> &v){
//    int noz=0,noo=0;
//    for(int i=0;i<v.size();i++){
//     if(v[i]==0) noz++;
//     else noo++;
//    } 
//    for(int i=0;i<v.size();i++){
//     if(i<noz) v[i]=0;
//     else v[i]=1;
//    }
// }

void swapSort(vector<int>&v){
    int i=0;
    int n=v.size();
    int j=n-1;
    while(i<j){
        if(v[i]==1 && v[j]==0){ //we keep this above the other two because the loop will still happen if i>j which we dont want
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
        if(v[j]==1) j--;
        if(v[i]==0) i++;
    }
}


int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    // sort01(v);
    swapSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
