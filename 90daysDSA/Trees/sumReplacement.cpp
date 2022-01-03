#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void sumReplacement(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    sumReplacement(root->left);
    sumReplacement(root->right);

    if (root->left != NULL)
    {
        root->data += root->left->data;
    }
    if (root->right != NULL)
    {
        root->data += root->right->data;
    }
}

void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    // level 0
    struct Node *root = new Node(1);
    // level 1
    root->left = new Node(2);
    root->right = new Node(3);
    // level 2
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preOrder(root);
    cout << "\n";
    sumReplacement(root);
    preOrder(root);

    return 0;
}