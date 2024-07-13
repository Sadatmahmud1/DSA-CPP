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

void insertAtTail(node *&head, int val)
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
void evenAfterOdd(node *&head)
{
    if (head == NULL || head->link == NULL)
    {
        return;
    }

    node *odd = head;
    node *evenHead = head->link;
    node *even = evenHead;

    while (even!= NULL && even->link!= NULL)
    {
        odd->link = even->link;
        //traversing to the next odd
        odd = odd->link;

        if (odd!= NULL)
        {
            even->link = odd->link;
            //traversing to the next even
            even = even->link;
        }
    }
    // at last last odd link points to the evenHead
    // Or this line connect odds tail to the evens head
    odd->link = evenHead;
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
    insertAtTail(head, 7);
    insertAtTail(head, 8);

    display(head);

    evenAfterOdd(head);
    display(head);

    return 0;
}