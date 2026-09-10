#include<iostream>
using namespace std;
struct node{
    char val;
    node*right;
    node*left;
    node(char data){
        val= data;
        left=right=NULL;
    }
};
void inorder(node*root){
    if(root==NULL) return ;
    inorder(root->left);
    cout<<" "<<root->val;
    inorder(root->right);
}
int main(){
    node*root=new node('A');
    root->left=new node('B');
    root->left->left=new node('D');
    root->left->right=new node('E');
    root->left->right->left=new node('G');
    root->right=new node('C');
    root->right->right=new node('F');
    root->right->right->left=new node('H');
    root->right->right->right=new node('I');
    inorder(root);
}