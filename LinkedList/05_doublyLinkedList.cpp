#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int value)
    {
        this->data = value;
        this->prev = NULL;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data-> " << value << endl;
    }
};

// Traversing the linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Gives length of linked list
int getLength(Node *head)
{
    int length = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

// Insert At head
void insertAtHead(Node *&head, Node *&tail, int value)
{
    // if empty list
    if (head == NULL)
    {
        Node *tmp = new Node(value);
        head = tmp;
        tail = tmp;
    }
    else
    {
        // 1. Create a node and put in data
        Node *temp = new Node(value);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// Insert at Tail
void insertAtTail(Node *&tail, Node *&head, int value)
{
    // if empty list
    if (tail == NULL)
    {
        Node *tmp = new Node(value);
        tail = tmp;
        head = tmp;
    }
    else
    {
        Node *temp = new Node(value);
        tail->next = temp;
        temp->prev = tail;
        tail = tail->next;
    }
}

// Insert At position
void insertAtposition(Node *&head, Node *&tail, int position, int value)
{
    // creating Node
    Node *NodeToInsert = new Node(value);

    // Insert at first position
    if (position == 1)
    {
        insertAtHead(head, tail, value);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // if given position is last position then oviously temp is pointing to the last node ; in this case we insert at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, value);
        return;
    }
    NodeToInsert->next = temp->next;
    temp->next->prev = NodeToInsert;
    temp->next = NodeToInsert;
    NodeToInsert->prev = temp;
}

void deleteNode(int position, Node *&head)
{
    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *preview = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            preview = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        preview->next = curr->next;
        curr->next = NULL;
        // **************here is an doubt of mine*************
        delete curr;
    }
}

int main()
{
    // Node *head = new Node(9);
    // Node *tail = head;

    Node *head = NULL;
    Node *tail = NULL;
    print(head);

    cout << " At first Length of linked list-> " << getLength(head) << endl;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 11);
    insertAtHead(head, tail, 12);
    print(head);

    insertAtTail(tail, head, 8);
    print(head);

    insertAtposition(head, tail, 2, 15);
    print(head);
    insertAtposition(head, tail, 5, 9);
    print(head);
    insertAtposition(head, tail, 1, 16);
    print(head);
    insertAtposition(head, tail, 8, 7);
    print(head);

    deleteNode(8, head);
    print(head);

    cout << "head-> " << head->data << endl;
    cout << "tail-> " << tail->data << endl;
    // H/W - handle tail in delete function

    return 0;
}