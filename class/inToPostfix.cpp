#include<iostream>
#include<string>
using namespace std;

int top=-1;
char stk[100];
void push(char x){
    top=top+1;
    stk[top]=x;
}
char pop(){
    if (top == -1) return '\0';
    return stk[top--];
}
int priority(char x){
    if(x=='(') return 0;
    if (x=='+' || x=='-') return 1;
    if (x=='*' || x=='/') return 2;
    if (x=='^') return 3;
    return -1;
}
int main(){
    string exp;
    cin>>exp;
    int i=0;
    char x;
    while(exp[i]!='\0'){
        if(isalnum(exp[i])){
            cout<<exp[i];
        }
        else if(exp[i]=='('){
            push(exp[i]);
        }
        else if(top==-1){
            push(exp[i]);
        }
        else if(exp[i]==')'){
            while((x=pop())!='('){
                cout<<x;
            }
        }
        else{
            while(top!=-1 && (priority(stk[top])>=priority(exp[i]))){
                cout<<pop();
            }
            push(exp[i]);
        }
        i++;
    }
    while(top!=-1){
            cout<<pop();
        }
        cout<<endl;
        return 0;
    
}