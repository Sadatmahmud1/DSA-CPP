#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *link;
    node *prev;

    node(int val)
    {
        data = val;
        link = NULL;
        prev = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->link = head;

    if (head != NULL)
    {
        head->prev = n;
    }

    head = n;
}

void insertAtTail(node *&head, int val)
{

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;

    while (temp->link != NULL)
    {
        temp = temp->link;
    }

    temp->link = n;
    n->prev = temp;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->link;
    }
    cout << endl;
}
int main()
{
      node *head = NULL;
        insertAtTail(head, 1);
        insertAtTail(head, 2);
        insertAtTail(head, 3);
        insertAtTail(head, 4);
        insertAtTail(head, 5);
        insertAtTail(head, 6);
        display(head);
        insertAtHead(head,5);
        display(head);

    return 0;
}