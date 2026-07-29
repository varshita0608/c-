#include<iostream>
#include<stack>
using namespace std;
struct node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
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
        return -1;
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
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    push();
  }  
  display();
}