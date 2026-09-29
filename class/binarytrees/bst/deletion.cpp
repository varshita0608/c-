#include<iostream>
using namespace std;

struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};
node*findMin(node*root){
    node*temp=root->right;
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
node*deleteNode(node*root,int key){
    if(root==NULL){
        delete root;
        return NULL;
    }
    if(key>root->data){
        root->right= deleteNode(root->right,key);
    }
    else if(key<root->data){
        root->left= deleteNode(root->left,key);
    }
    else {
        if(root->right == NULL && root->left==NULL){
            delete root;
            return NULL;
        }
        else if(root->right == NULL){
            node*temp=root->left;
            delete root;
            return temp;
        }
        else if(root->left==NULL){
            node*temp=root->right;
            delete root;
            return temp;
        }
        else{
            node*temp=findMin(root);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
        }
    }
    return root;
}
void inorder(node* root) {

    if (root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main(){
    node* root = new node(10);
    root->left = new node(5);
    root->right = new node(15);
    root->left->left = new node(2);
    root->left->right = new node(8);
    root->right->left = new node(12);
    root->right->right = new node(25); 
    root->left->left->right= new node(4);
    root->left->right->left= new node(7);
    root->right->left->left=new node(11);
    root->right->left->right=new node(14);
    root->right->right->left=new node(20);
    root->right->right->right=new node(30);
    root->right->right->left->left=new node(18);

    cout << "Before deletion: ";
    inorder(root);
    int del;
    cout<<endl<<"node to delete :";
    cin>>del;
    root = deleteNode(root, del); 
    cout << "\nAfter deletion: ";
    inorder(root); 
    cout<<endl<<"deleted node :"<<del;

    return 0;
}