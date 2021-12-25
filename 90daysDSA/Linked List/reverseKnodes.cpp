#include <iostream>
using namespace std;

// creating node

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// insert at tail

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// print the linked list

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// func

node *reverseK(node *&head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *nextPtr;

    int count = 0;
    while (curr != NULL && count < k)
    {
        nextPtr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextPtr;
        count++;
    }
    if (nextPtr != NULL)
        head->next = reverseK(nextPtr, k);

    return prev;
}

// main function

int main()
{
    node *head = NULL;
    // insert
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    display(head);
    node *newHead = reverseK(head, 2);
    display(newHead);

    return 0;
}