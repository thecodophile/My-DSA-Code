
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

void insertAtBegin(Node *&head, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void insertAftergivenNode(Node *&prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "The given previous node cannot be NULL";
        return;
    }
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void insertAtEnd(Node *&head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;
    Node *ptr = head_ref;

    if (head_ref == NULL)
    {
        head_ref = new_node;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
}

int main()
{
    /*
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *forth = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    forth = new Node();
    */

    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *forth = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = forth;

    forth->data = 4;
    forth->next = NULL;

    printList(head);

    insertAtBegin(head, 10);
    printList(head);

    insertAftergivenNode(head->next, 20);
    printList(head);

    // Node *head = NULL;
    // insertAtEnd(head, 40);

    insertAtEnd(head, 40);
    printList(head);
    return 0;
}
