//smaller than X remove from string then sort nd reverse
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string str;
    for(int i=0;i<s.size();i++){
        if(s[i]>=(char) X){
            cin>>str;
        }
    }
    cout<<endl<<str;
    for(int i=0;i<str.size()-1;i++){
        bool flag=true;
        for(int j=0;j<str.size()-i-1;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
    }
    cout<<endl<<str;
}