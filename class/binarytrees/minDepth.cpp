#include<iostream>
using namespace std;
struct node{
    int val;
    node*right;
    node*left;
    node(int data){
        val=data;
        right=left=NULL;
    }
};
int height(node*root){
    if(root==NULL){
        return 0;
    }
    else{
        return 1+ min(height(root->left),height(root->right));
    }
}
int main(){
    node*root=new node('A');
    root->left=new node('B');
    root->right=new node('C');
    root->left->left=new node('D');
    root->left->right=new node('E');
    cout<<"The min height of tree = "<<height(root);
}