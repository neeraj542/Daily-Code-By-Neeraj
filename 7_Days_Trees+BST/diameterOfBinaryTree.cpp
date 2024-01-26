#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left=NULL;
        right=NULL;
    }
};

void levelOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* currNode = q.front();
        q.pop();

        cout << currNode->data << " ";

        if(currNode->left != NULL){
            q.push(currNode->left);
        }
        if(currNode->right != NULL){
            q.push(currNode->right);
        }
    }
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    int ans = max(lh, rh)+1;
    return ans;
}

int diameterOfBT(Node* root){
    if(root==NULL){
        return 0;
    }

    int op1 = diameterOfBT(root->left);
    int op2 = diameterOfBT(root->right);
    int op3 = height(root->left) + height(root->right)+1;
    int ans = max(op1, max(op2, op3));

    return ans;
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(60);
    root->right = new Node(30);
    root->left->left = new Node(80);
    root->left->right = new Node(50);
    root->right->right= new Node(40);
    root->left->right->left= new Node(20);
    root->left->right->right= new Node(70);

    cout << "Tree: ";
    levelOrderTraversal(root);
    cout << endl;

    cout << " - Height of BinaryTree: " << height(root) << endl;

    cout << " - Diameter of BinaryTree: " <<diameterOfBT(root) << endl;
    return 0;    
}