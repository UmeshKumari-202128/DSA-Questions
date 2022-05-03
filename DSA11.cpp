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

void makeLoop(node *&head, int k){

    node *temp= head;
    int count=1;

    while(count < k){
        temp = temp->next;
        count++;
    }

    node* join_point = temp;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=join_point;
}

bool hasCycle(node* head){
    if(head==NULL){
        cout<<"false"<<endl;
    }

    node* slow_ptr = head;
    node* fast_ptr = head;

    while(slow_ptr!=fast_ptr){
        if(fast_ptr==NULL || fast_ptr->next==NULL){
            cout<<"false"<<endl;

        }
       slow_ptr=slow_ptr->next;
       fast_ptr=fast_ptr->next->next;
    }
   cout<<"true"<<endl;
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
   // makeLoop(head,3);
    //display(head);
    hasCycle(head);


    return 0;}


