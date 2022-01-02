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

Node *buildTree(int postOrderArray[], int inOrderArray[], int start, int end)
{
    static int idx = 4;
    if (start > end)
    {
        return NULL;
    }

    int val = postOrderArray[idx];
    idx--;
    Node *curr = new Node(val);

    if (start == end)
    {
        return curr;
    }

    int pos = search(inOrderArray, start, end, val);
    curr->right = buildTree(postOrderArray, inOrderArray, pos + 1, end);
    curr->left = buildTree(postOrderArray, inOrderArray, start, pos - 1);

    return curr;
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
    int postOrderArray[] = {4, 2, 5, 3, 1};
    int inOrderArray[] = {4, 2, 1, 5, 3};
    // build tree
    Node *root = buildTree(postOrderArray, inOrderArray, 0, 4);

    // printing
    inOrderPrint(root);

    return 0;
}