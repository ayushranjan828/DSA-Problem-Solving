/*
    Given the head of a linked list, delete every alternate element from the list starting from the second element.
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

class LinkedList
{
    public:
    Node* head;

    LinkedList()
    {
        head = NULL;
    }

    void Insert_at_tail(int val)
    {
        Node* new_node = new Node(val);
        if(head == NULL) // LinkedList is empty
        {
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = new_node;
    }

    void display()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout<<temp -> val<<" -> ";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;
    }
};

void delete_alternate_node(Node* &head)
{
    Node* curr_node = head;
    while( (curr_node != NULL) && (curr_node -> next != NULL))
    {
        Node* temp = curr_node -> next; //This Node deleted 
        curr_node -> next = curr_node -> next -> next;
        free(temp);
        curr_node = curr_node -> next;
    }
}

int main()
{
    LinkedList ll;

    ll.Insert_at_tail(5);
    ll.Insert_at_tail(4);
    ll.Insert_at_tail(3);
    ll.Insert_at_tail(2);
    ll.Insert_at_tail(1);

    ll.display();

    delete_alternate_node(ll.head);
    ll.display();

    return 0;
}