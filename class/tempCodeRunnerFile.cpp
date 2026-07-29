#include<iostream>
#include<stack>
using namespace std;
struct node{
    int data;
    node *next;
};
struct node*head;
void push(){
    int x;
    cin>>x;
    node*temp=new node(x);
    if(head==NULL){
        temp->data=x;
        temp->next=head;
        head=temp;
    }
    else{
        temp->data=x;
        temp->next=head;
        head=temp;
    }
}
int pop(){
    if(head==NULL){
        cout<<"underflow";
    }
    else{
        int x=head->data;
        node*temp=head;
        head=head->next;
        delete(temp);
        return x;
    }
}
void display(){
    if(head==NULL){
        cout<<"empty";
    }
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    
}