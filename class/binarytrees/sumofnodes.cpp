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
int sumnodes(node*root){
    if(root==NULL) return 0;
    return root->val + sumnodes(root->left) + sumnodes(root->right);
}
int main(){
    node*root=new node(1);
    root->left=new node(5);
    root->right=new node(6);
    root->left->left=new node(1);
    root->left->right=new node(3);
    cout<<"The sum of nodes= "<<sumnodes(root);
}