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

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    int ans = max(lh, rh)+1;
    return ans;
}

bool isBalanced(Node *root)
{
    if(root==NULL){
        return true;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    int diff = abs(lh-rh);
    bool rootAns = (diff<=1);

    bool leftAns = isBalanced(root->left);
    bool rightAns = isBalanced(root->right);

    if(rootAns && leftAns && rightAns)return true;
    else return false;
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

    cout << "Tree is Balanced? (Yes/NO): " << endl;
    if (isBalanced(root))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}