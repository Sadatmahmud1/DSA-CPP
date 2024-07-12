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

void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode = nullptr;

    int count = 1;
    while(temp->link != NULL){
        if(count == pos){
            startNode = temp;
            }
            
            temp = temp->link;
            count++;
    }
    temp->link = startNode; // Create the cycle by linking the last node to the startNode
}

bool detectCycle(node* &head){
    node* slow = head;
    node* fast = head;

    while (fast!= NULL && fast->link != NULL)
    {
        slow = slow->link;
        fast = fast->link->link;
        if (fast == slow)
        {
                return true;
        }
        
    }
    return false;
}

void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;

    do
    {
        slow = slow->link;
        fast= fast->link->link;
    } while (slow!= fast);
    fast = head;

    while (slow->link!=fast->link)
    {
        slow = slow->link;
        fast = fast->link;
    }

    slow->link = NULL;
    
    cout<<"Cycle Removed!"<<endl;
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
    makeCycle(head, 3);
   bool isit = detectCycle(head);

    if (isit == true)
    {
        cout<<"cycle detected"<<endl;
    }
    
    removeCycle(head);

    display(head);


    return 0;
}