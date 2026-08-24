//leetcode 242
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="physics wallah";
    string s2="wallah physics";
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1!=s2) cout<<"not an anagram";
    else cout<<"yes an anagram";
}