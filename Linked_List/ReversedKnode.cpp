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

    node *reverseKnode(node *&head, int k)
    {
        node *prev = NULL;
        node *curr = head;
        node *next;
        int count = 0;
        // this loop runs k time instade of reversing full linked list
        while (curr != NULL && count < k)
        {
            // We points thrue curr->link to next element
            // it stores through curr->link address of next
            next = curr->link;
            // this line changing the address of curr's link address now it contain the address of prev
            //  curr->link == next
            curr->link = prev;

            // now we are moving prev to curr and setting it as new prev for next itration
            prev = curr;
            // now wer are moving current to next and setting it as new prev for next itration
            curr = next;
            count++;
        }

        if (next != NULL)
        {
            //this line is conecting first reversed pairs to second pairs head
            // through previous heads head->link and putting the address of next
            head->link = reverseKnode(next, k);
        }
        return prev;
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
        display(head);

        node *newHead = reverseKnode(head, 2);

        display(newHead);

        return 0;
    }