#include<iostream>
#include<vector>
#include<queue>
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
vector<vector<int>> levelorder(node*root){
    vector<vector<int>> result;
    if(root==NULL) return result;
    
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        vector<int>visited;
        int level=q.size();
        for(int i=0;i<level;i++){
            node*curr=q.front();
            q.pop();
            visited.push_back(curr->val);
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
        }
        result.push_back(visited);
    }
    return result;
}
int main(){
    node*root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->left->left=new node(8);
    root->left->left->right=new node(9);
    root->right=new node(3);
    root->right->right=new node(7);
    root->right->left=new node(6);
    vector<vector<int>>Resu= levelorder(root);
    
    for(int i = 0; i <Resu.size(); i++){
        for(int j = 0; j <Resu[i].size(); j++){
            cout <<Resu[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}