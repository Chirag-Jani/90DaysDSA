#include <bits/stdc++.h>
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

int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh, rh) + 1;
}
bool isBalanced(Node *root)
{
    if (root == NULL)
    {
        return 1;
    }

    if ((isBalanced(root->left) == false) || (isBalanced(root->right) == false))
    {
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);

    if (abs(lh - rh) <= 1)
    {
        return 1;
    }
    else
        return 0;
}

bool isBalancedOptimised(Node *root, int *height)
{
    if (root == NULL)
    {
        return 1;
    }

    int lh = 0, rh = 0;
    if ((isBalancedOptimised(root->left, &lh) == false) || (isBalancedOptimised(root->right, &rh) == false))
    {
        return false;
    }

    *height = max(lh, rh) + 1;
    if (abs(lh - rh) <= 1)
    {
        return 1;
    }
    else
        return 0;
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
    int height = 0;

    cout << isBalanced(root) << endl;
    cout << isBalancedOptimised(root, &height) << endl;

    return 0;
}
