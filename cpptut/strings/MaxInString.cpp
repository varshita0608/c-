#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[5]={"000123","0023","4567","0972","000043375"};
    int max = stoi(arr[0]);
    string maxs = arr[0];
    for(int i=0;i<5;i++){
        int x=stoi(arr[i]);
        if(x>max){
            max=x;
            maxs=arr[i];
        }
    }
    cout<<maxs<<endl;
    cout<<max;
}