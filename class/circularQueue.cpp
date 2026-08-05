#include<iostream>
using namespace std;
#define MAX 5
struct MyQueue{
    int queue[MAX];
    int front=-1;
    int rear=-1;

    void Enqueue(int item){
        if((front==0 && rear==MAX-1) || front==rear+1){
            cout<<"overflow"<<endl;
            return;
        }
        if(rear==MAX){
            rear=0;
        }
        else if(front==-1 && rear==-1){
            front=0;
            rear=0;
        }
        else{
            rear=rear+1;
        }
        queue[rear]=item;
        cout<<"inserted:"<<item<<endl;
    }
    void Dequeue(){
        if(front==-1 ){
            cout<<"underflow"<<endl;
            return;
        }
        cout<<"deleted:"<<queue[front]<<endl;
       
        if(front==rear){
            front=-1;
            rear=-1;
        }
        if(front==MAX-1){
            front=0;
        }
        else{
            front=front+1;
        }
    }
    void display(){
        if(front==-1){
            cout<<"queue empty"<<endl;
            return;
        }
        for(int i=front;i<=rear;i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    MyQueue q;
    int choice, val;
    while(true){
        cout<<"1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.display"<<endl<<"4.exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter value to insert";
            cin>>val;
            q.Enqueue(val);
            break;

            case 2:
            q.Dequeue();
            break;

            case 3:
            q.display();
            break;

            case 4:
            return 0;

            default:
            cout<<"invalid choice";
        }

    }
    return 0;
}