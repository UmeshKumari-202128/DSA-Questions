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

void printList(node *head, int total_nodes)
{
    node *curr = head;
    int count = 0;
    while (count < total_nodes)
    {
        count++;
        cout << curr->data << " ";
        curr = curr->next;
    }
}

void makeLoop(node **head_ref, int k)
{
    node *temp = *head_ref;
    int count = 1;
    while (count < k)
    {
        temp = temp->next;
        count++;
    }

    node *k_node = temp;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = k_node;
}
 
bool hasCycle(node* head){
    cout<<endl;
    if(head==NULL){
        cout<<"false"<<endl;
    }

    node* slow_ptr = head;
    node* fast_ptr = head->next;

    while(slow_ptr!=fast_ptr){
        if(fast_ptr==NULL || fast_ptr->next==NULL){
            cout<<"false"<<endl;

        }
       slow_ptr=slow_ptr->next;
       fast_ptr=fast_ptr->next->next;
    }
   cout<<" true "<<endl;
}

int main()
{
    node *head = NULL;
    head = new node(3);
    head->next = new node(7);
    head->next->next = new node(4);
    head->next->next->next = new node(9);
    head->next->next->next->next = new node(2);
    int k = 2;
    cout<<endl;
    cout<<"Given list : ";
    printList(head,5);
    makeLoop(&head,k);
    cout<<endl;
    cout<<"Modified list : ";
    printList(head,8);
    hasCycle(head);

    return 0;
}
