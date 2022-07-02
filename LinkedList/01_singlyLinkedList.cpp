// Singly Linked List

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data->" << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    // new node create
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    // new node create
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // Insert at first position
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // Insert At  Last Position
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // creating Node
    Node *NodeToInsert = new Node(data);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}
void deleteNode(int position, Node *&head)
{
    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free of start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Creating a New Node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // Head pointed to node1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 15);
    print(head);
    insertAtTail(tail, 25);
    print(head);

    insertAtPosition(head, tail, 1, 13);
    insertAtPosition(head, tail, 2, 14);
    insertAtPosition(head, tail, 7, 30);
    print(head);

    cout << "Head-> " << head->data << endl;
    cout << "Tail-> " << tail->data << endl;

    deleteNode(4, head);
    print(head);
    return 0;
}