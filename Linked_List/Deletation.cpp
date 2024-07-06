#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
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
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteAThead(node* &head){
    node* todelete = head;
    head = head->next;

    delete todelete;

}

void deletation(node* &head, int val){
        
        if (head == NULL)
    {
        return;
    }

    if (head->next== NULL)
    {
          deleteAThead(head);
    }
    
    node* temp = head;
    while (temp->next->data!=val)
    {
        temp = temp->next;

    }

    node* todelete = temp->next;

    temp->next = temp->next->next;
    
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