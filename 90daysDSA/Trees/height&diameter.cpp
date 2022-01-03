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

int calcHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = calcHeight(root->left);
    int rh = calcHeight(root->right);

    return max(lh, rh) + 1;
}
int diameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = calcHeight(root->left);
    int rh = calcHeight(root->right);
    int curr = lh + rh + 1;

    int lDiameter = diameter(root->left);
    int rDiameter = diameter(root->right);

    return max(curr, max(lDiameter, rDiameter));
}

int recursiveDiameter(Node *root, int *height)
{
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }

    int lh = 0, rh = 0;
    int lDiameter = recursiveDiameter(root->left, &lh);
    int rDiameter = recursiveDiameter(root->right, &rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;

    return max(currDiameter, max(lDiameter, rDiameter));
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
    // level 3
    root->left->left->left = new Node(8);
    // level 4
    root->left->left->left->left = new Node(9);

    // level 0 //                   1
    // level 1 //             2           3
    // level 2 //         4       5   6       7
    // level 3 //     8
    // level 4 // 9

    cout << calcHeight(root) << endl;
    cout << diameter(root) << endl;
    int height = 0;
    cout << recursiveDiameter(root, &height) << endl;
    return 0;
}