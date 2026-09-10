#include<iostream>
using namespace std;
struct node{
    int val;
    node*left;
    node*right;
    node(int data){
        val=data;
        left=right=NULL;
    }
};
int countNodes(node*root){
    if(root==NULL) return 0;
    else{
        return 1+ countNodes(root->left)+countNodes(root->right);
    }
}
int main(){
    node*root=new node('A');
    root->left=new node('B');
    root->right=new node('C');
    root->left->left=new node('D');
    root->left->right=new node('E');
    cout<<"The count of nodes= "<<countNodes(root);
}