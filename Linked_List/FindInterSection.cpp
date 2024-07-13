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
int intersect(node* &head1, node* head2, int pos){
    node *temp1 = head1;
    pos--;
    while (pos--)
    {
        temp1 = temp1->link;
    }
    node* temp2 = head2;
    while(temp2->link!= NULL){
        temp2 = temp2->link;
    }
    
    temp2->link = temp1;
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

int intersectionFind(node* &head1, node* &head2){
    int l1 = length(head1);
    int l2 = length(head2);
     
     int d = 0;

     node* ptr1;
     node* ptr2;
     if (l1 > l2)
     {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
     }
     else
     {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
     }
     
     while (d)
     {
        ptr1 = ptr1->link;

        if (ptr1!=NULL)
        {
            return -1;
        }
        d--;
     }

     while (ptr1 != NULL && ptr2 != NULL)
     {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }

        ptr1 = ptr1->link;
        ptr2 = ptr2->link;

     }
     
     return -1;
     
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

    node *head1 = NULL;
    node *head2 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head2, 7);
    insertAtTail(head2, 8);
    insertAtTail(head2, 9);
    intersect(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersectionFind(head1,head2)<<endl;
    return 0;
}