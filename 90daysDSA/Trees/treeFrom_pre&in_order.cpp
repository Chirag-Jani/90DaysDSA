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

int search(int inOrderArray[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrderArray[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(int preOrderArray[], int inOrderArray[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }

    int curr = preOrderArray[idx];
    idx++;
    Node *node = new Node(curr);

    if (start == end)
    {
        return node;
    }

    int pos = search(inOrderArray, start, end, curr);
    node->left = buildTree(preOrderArray, inOrderArray, start, pos - 1);
    node->right = buildTree(preOrderArray, inOrderArray, pos + 1, end);

    return node;
}

void inOrderPrint(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    inOrderPrint(root->left);
    cout << root->data << " ";
    inOrderPrint(root->right);
}

int main()
{
    int preOrderArray[] = {1, 2, 4, 3, 5};
    int inOrderArray[] = {4, 2, 1, 5, 3};

    // build tree
    Node *root = buildTree(preOrderArray, inOrderArray, 0, 4);

    // printing
    inOrderPrint(root);
    return 0;
}