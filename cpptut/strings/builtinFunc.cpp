#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;
    // + operator can append or basically just add srting to string even a char
    str=str+"abc";
    cout<<str<<endl;
//popback and pushback also exist where pushback can only be used for a char not multiple char
    reverse(str.begin()+2,str.end()-1);
    cout<<str;
}    