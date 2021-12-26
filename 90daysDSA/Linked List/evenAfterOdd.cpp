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

void evenafterodd(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;

    while (even->next != NULL && odd->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenStart;

    if (odd->next != NULL)
    {
        even->next = NULL;
    }
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
    evenafterodd(head);
    display(head);
    return 0;
}