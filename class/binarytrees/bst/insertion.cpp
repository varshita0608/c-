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
        left=right=NULL;
    }
};
node*insertion(node*root,int key){
    node*newnode=new node(key);
    if(root==NULL) return newnode;
    if(key>root->val) root->right=insertion(root->right,key); 
    else if(key<root->val) root->left=insertion(root->left,key); 
    return root;
}
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
    node*root=NULL;
    int values[] = {5, 3, 7, 2, 4, 6, 8};
    for (int value : values) {
        root = insertion(root, value);
    }
    vector<vector<int>>Resu= levelorder(root);
    
    for(int i = 0; i <Resu.size(); i++){
        for(int j = 0; j <Resu[i].size(); j++){
            cout <<Resu[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}