// #include<iostream>
// #include<queue>
// using namespace std;
// struct node{
//     int val;
//     node*right;
//     node*left;
//     node(int data){
//         left=right=NULL;
//         val=data;
//     }
// };
// void insertCBT(node*root,values[i],q){

// }
// int main(){
//     queue q;
//     node*root==NULL;
//     int values[9]={1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<9;i++){
//         insertCBT(root,values[i],q);
//     }
// }

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct node {
    int val;
    node* left;
    node* right;

    node(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

node* insertionCBT(node* root, int value, queue<node*>& q) {
    node* newNode = new node(value);

    if (root == NULL) {
        root = newNode;
        q.push(root);
        return root;
    }

    node* curr = q.front();

    if (curr->left == NULL) {
        curr->left = newNode;
    }
    else if (curr->right == NULL) {
        curr->right = newNode;
        q.pop();
    }

    q.push(newNode);

    return root;
}

vector<vector<int>> levelOrder(node* root) {
    vector<vector<int>> result;

    if (root == NULL) {
        return result;
    }

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        vector<int> visited;
        int level = q.size();

        for (int i = 0; i < level; i++) {
            node* curr = q.front();
            q.pop();

            visited.push_back(curr->val);

            if (curr->left != NULL) {
                q.push(curr->left);
            }

            if (curr->right != NULL) {
                q.push(curr->right);
            }
        }

        result.push_back(visited);
    }

    return result;
}

int main() {
    node* root = NULL;
    queue<node*> q;

    vector<int> values = {1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < values.size(); i++) {
        root = insertionCBT(root, values[i], q);
    }

    vector<vector<int>> result = levelOrder(root);

    for (const auto& level : result) {
        for (int value : level) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
