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

bool areIdenticalTree(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }

    if (root1 != NULL && root2 != NULL)
    {
        return (root1->data == root2->data) && areIdenticalTree(root1->left, root2->left) && areIdenticalTree(root1->right, root2->right);
    }
    return false;
}
int main()
{
    Node *root1 = new Node(10);
    root1->left = new Node(60);
    root1->right = new Node(30);
    root1->left->left = new Node(80);
    root1->left->right = new Node(50);
    root1->right->right = new Node(40);
    root1->left->right->left = new Node(20);
    root1->left->right->right = new Node(70);

    Node *root2 = new Node(10);
    root2->left = new Node(60);
    root2->right = new Node(30);
    root2->left->left = new Node(80);
    root2->left->right = new Node(50);
    root2->right->right = new Node(40);
    root2->left->right->left = new Node(20);
    root2->left->right->right = new Node(70);

    cout << "Are both trees Identical? (Yes/NO): " << endl;
    if (areIdenticalTree(root1, root2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}