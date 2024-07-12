#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *link;
    node(int data)
    {
        this->data = data;
        link = NULL;
    }
};

// through the temp pointer we are modifying original nodes next (linker)
// but head will be alwys points the first node.
// so thet we can access the first node and traverse it.

void insertAtTail(node* &head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->link != NULL)
    {
        temp = temp->link;
    }

    temp->link = n;
}

node* reverseRecursive(node* &head){

    if (head == NULL || head-> link == NULL)
    {
        return head;
    }
    
    
    node* newHead = reverseRecursive(head->link);
    head->link->link = head;
    head->link = NULL;

    return newHead;

}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
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
    display(head);

   node* newHead = reverseRecursive(head);

    display(newHead);

    return 0;
}