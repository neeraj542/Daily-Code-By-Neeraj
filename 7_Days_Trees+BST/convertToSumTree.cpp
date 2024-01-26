#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int convertToSumTree(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftAns = convertToSumTree(root->left);
    int rightAns = convertToSumTree(root->right);

    root->data = root->data + leftAns + rightAns;
    return root->data;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(60);
    root->right = new Node(30);
    root->left->left = new Node(80);
    root->left->right = new Node(50);
    root->right->right = new Node(40);
    root->left->right->left = new Node(20);
    root->left->right->right = new Node(70);

    cout << "Sum Tree: " <<endl;
    cout << convertToSumTree(root);
    
    return 0;
}