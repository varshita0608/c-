#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str ="i am trynna count the words , words can i count words from words";
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp); //one word pushed into vector at a time
    }
    sort(v.begin(),v.end()); // sorted to find max occurence
    int MaxCount=1;
    int count=1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count =1;
        MaxCount=max(MaxCount,count);
    }
    count =1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count =1;
        if(count==MaxCount) cout<<v[i]<<" "<<MaxCount<<endl;
    }

}
