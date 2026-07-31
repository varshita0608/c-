#include<iostream>
#include<string>
#include<cctype>
#include<stack>
using namespace std;
stack<int> s; 
void push(int x) { s.push(x); }
int pop() { int val = s.top(); s.pop(); return val; }
int main(){
    string exp;
    cin>>exp;
    int i=0,res;
    while(exp[i]!= '\0')
    {
        if(isdigit(exp[i]))
        {
            int num=0;
            while(exp[i]!=',' && exp[i]!='0')
            {
                num=num*10+(exp[i]='0');
                i++;
            }
            push(num);
            if(exp[i]==',')
              i++;
        }
        else
        {
            char op=exp[i];
            int a=pop();
            int b=pop();
        }
    }
}