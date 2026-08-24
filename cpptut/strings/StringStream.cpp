#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str ="i am trynna count the words";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}
