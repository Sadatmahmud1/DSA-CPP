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
{   // if head is null it meas there is no node so that initially created node will be the first
// node and head will point to it. also it will return and rest of the code will never be exicutated
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

node* reversePtr(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* next;

    while (curr != NULL)
    {
        // We points thrue curr->link to next element
        //it stores through curr->link address of next
        next = curr->link;
        //this line changing the address of curr's link address now it contain the address of prev
        // curr->link == next
        curr->link  = prev;

        // now we are moving prev to curr and setting it as new prev for next itration
        prev = curr;
        // now wer are moving current to next and setting it as new prev for next itration
        curr = next;

    }
      head = prev;  // Update the head to the new head
    return head;  // Return the new head

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

   node* newHead = reversePtr(head);

    display(newHead);

    return 0;
}