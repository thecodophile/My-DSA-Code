#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int dataa)
    {
        this->data = dataa;
        this->next = NULL;
    }
    // desturctor
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

void print(Node *tail)
{
    Node *tmp = tail;
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != tmp);
    cout << endl;
}
void insertNode(Node *&tail, int element, int data)
{
    // empty list
    if (tail == NULL)
    {
        Node *new_node = new Node(data);
        tail = new_node;
        new_node->next = new_node;
    }
    // non empty list
    // asuming the element is present in the list
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // means element found and curr is representing that node
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&tail, int element)
{
    // empty list
    if (tail == NULL)
    {
        cout << "The list is empty...pls check again" << endl;
        return;
    }
    // non empty case
    // asuming that the value is present in the list
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // one node linked list
        if (curr == prev)
        {
            tail = NULL;
        }
        // >=2 node linked list
        else if (tail == curr)
        {
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *tail = NULL;
    // insert in empty list
    // in this case element dont matter
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);
    insertNode(tail, 9, 10);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);
    insertNode(tail, 7, 8);
    print(tail);

    deleteNode(tail, 5);
    print(tail);
    return 0;
}