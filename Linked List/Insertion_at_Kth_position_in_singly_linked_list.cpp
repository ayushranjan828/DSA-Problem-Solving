/*
    Insert Node at the begning of the Linked List.
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

void insert_at_head(Node* &head, int val) //Inserting element at head
{
    Node* new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
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

    insert_at_head(head, 1);
    display(head);

    insert_at_head(head, 2);
    display(head);

    insert_at_head(head, 3);
    display(head);

    return 0;
}