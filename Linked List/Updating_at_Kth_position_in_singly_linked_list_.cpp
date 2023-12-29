/*
    Update Node at the any position of the Linked List.
*/
#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void insert_at_head(Node* &head, int val) //Inserting element at starting
{
    Node* new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
}

void insert_at_tail(Node* &head, int val) // Inserting element at tail
{
    Node* new_node = new Node(val);
    Node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = new_node;
}

void insert_at_position(Node* &head, int val, int pos) // Inserting element at given position
{
    if(pos == 0)
    {
        insert_at_head(head, val);
        return;
    }
    Node* new_node = new Node(val);
    Node *temp = head;
    int current_pos = 0;
    while(current_pos != pos-1)
    {
        temp = temp -> next;
        current_pos++;
    }
    new_node -> next = temp -> next;
    temp -> next = new_node;
}

void update_at_position(Node* &head, int k, int val) // Update element at given position
// K is position of linked list
{
    Node* temp = head;
    int current_pos = 0;
    while(current_pos != k)
    {
        temp = temp -> next;
        current_pos++;
    }
    temp -> val = val;
}

void display(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> val<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head = NULL;

    insert_at_head(head, 2); 
    display(head);

    insert_at_head(head, 1);
    display(head);

    insert_at_head(head, 3);
    display(head);

    insert_at_tail(head, 4);
    display(head);

    insert_at_position(head, 22, 2);
    display(head);

    update_at_position(head, 3, 91);
    display(head);

    return 0;
}