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
node *mergeRecursive(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    node* result;
    if (head1->data < head2->data)
    {
        result = head1;
        head1 = head1->link;
        result->link = mergeRecursive(head1, head2);
    }
    else
    {
        result = head2;
        head2 = head2->link;
        result->link = mergeRecursive(head1, head2);
    }
    return result;
}
node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummyNode = new node(-1);
    node *p3 = dummyNode;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->link = p1;
            p1 = p1->link;
        }
        else
        {
            p3->link = p2;
            p2 = p2->link;
        }
        p3 = p3->link;
    }

    while (p1 != NULL)
    {
        p3->link = p1;
        p1 = p1->link;
        p3 = p3->link;
    }

    while (p2 != NULL)
    {
        p3->link = p2;
        p2 = p2->link;
        p3 = p3->link;
    }

    return dummyNode->link;
}
int main()
{

    node *head1 = NULL;
    node *head2 = NULL;

    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8};

    for (int i = 0; i < 5; i++)
    {
        insertAtTail(head1, arr1[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        insertAtTail(head2, arr2[i]);
    }

    node *newNode = merge(head1, head2);
    // node *newNode = mergeRecursive(head1, head2);
    

    display(newNode);

    return 0;
}