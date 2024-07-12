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

int length(node *head){
    int l = 0;
    node* temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->link;
    }
    return l;
}

node* knapped(node* &head, int k){
    node* newHead = nullptr;
    node* newTail = nullptr;
    node* tail = head;

    int l = length(head);
    // if k is out of bound in that case it will act
    k = k%l;
    int count = 1;

    while (tail->link!=NULL)
    {
        if (count == l-k){
            newTail = tail; 
        }
        if (count == l-k+1){
            newHead = tail;
            }

            tail = tail->link;
            count++;
    }
    newTail->link = NULL;
    tail->link = head;

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
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    node* newhead = knapped(head,4);
    display(newhead);

    return 0;
}