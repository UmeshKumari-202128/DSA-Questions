#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAfter(node *pre_node, int val)
{
    node *a = new node(val);
    a->data = val;
    a->next = pre_node->next;
    pre_node->next = a;
}

void insertAtTail(node *&head, int val)
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

void insertAtHead(node *&head, int val)
{

    node *m = new node(val);
    m->next = head;
    head = m;
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

node *reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *next;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void deletion(node *head, int val)
{

    if (head == NULL)
    {
        return;
    }

    node *temp = head;

    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}

// void middleElement(node *head)
// {
//     node *slow_ptr = head;
//     node *fast_ptr = head;

//     while (fast_ptr->next != NULL && fast_ptr->next->next != NULL)
//     {
//         fast_ptr = fast_ptr->next->next;
//         slow_ptr = slow_ptr->next;
//     }
//     cout << "The middle element is " << slow_ptr->data << endl;
// }

void middleElement(node *head)
{
    node *ptr = head;
    int count = 0;
    while (ptr != NULL && ptr->next != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    cout << "The length is " << count << endl;

    ptr = head;
    int c = 0;
    while (c < count / 2)
    {
        ptr = ptr->next;
        c++;
    }

    if (count / 2 == 0)
    {
        cout << "The middle element is " << ptr->data << endl;
    }
    else
    {
        cout << "The middle element is " << ptr->next->data << endl;
    }
}



void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    node *head = NULL;
    insertAtTail(head, 4);
    insertAtTail(head, 1);
    insertAtTail(head, 54);
    insertAtTail(head, 2);
    insertAtTail(head, 9);
    insertAtTail(head, 19);
    display(head);
    

    //     insertAfter(head->next->next, 6);

    //     insertAtHead(head, 64);
    //     display(head);
    //     cout << search(head, 54) << endl;
    //     cout << search(head, 80) << endl;

    //     deleteAtHead(head);
    //     deletion(head, 2);
    //     display(head);

    //    node* newhead=reverse(head);
    //     display(newhead);
    middleElement(head);

    return 0;
}