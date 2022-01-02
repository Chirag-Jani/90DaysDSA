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

void preOrder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(struct Node *root)
{

    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void postOrder(struct Node *root)
{

    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
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

    // Pre-Order traversal = Root node -> Left sub tree -> Right sub tree
    cout << "Pre-order traversal is =" << endl;
    preOrder(root);
    cout << endl;

    // Pre-Order traversal =  Left sub tree -> Root node -> Right sub tree
    cout << "In-order traversal is =" << endl;
    inOrder(root);
    cout << endl;

    // Pre-Order traversal =  Left sub tree -> Right sub tree -> Root node
    cout << "Post-order traversal is =" << endl;
    postOrder(root);
    cout << endl;

    return 0;
}