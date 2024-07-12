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

void deleteAThead(node* &head){
    node* todelete = head;
    head = head->link;

    delete todelete;

}

void deletation(node* &head, int val){
        
        if (head == NULL)
    {
        return;
    }

    if (head->link== NULL)
    {
          deleteAThead(head);
    }
    
    node* temp = head;
    while (temp->link->data!=val)
    {
        temp = temp->link;

    }

    node* todelete = temp->link;

    temp->link = temp->link->link;
    
    delete todelete;
}

int main()
{

    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    deletation(head,2);
    deleteAThead(head);
    display(head);

    return 0;
}