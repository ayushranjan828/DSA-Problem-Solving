/*
    Given the head of a sorted linked list, delete all duplicate such that each element appears only once.
    Return the linked list sorted as well.
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

void delete_duplicate_node(Node* &head)
{
    Node* curr_node = head;
    while(curr_node != NULL)
    {
        while( (curr_node -> next != NULL) && ((curr_node -> val)==(curr_node -> next -> val)) )
        {
            Node* temp = curr_node -> next;
            curr_node -> next = curr_node -> next -> next;
            free(temp);
        }
        curr_node = curr_node -> next;
    }
}

int main()
{
    LinkedList ll;

    ll.Insert_at_tail(5);
    ll.Insert_at_tail(5);
    ll.Insert_at_tail(4);
    ll.Insert_at_tail(3);
    ll.Insert_at_tail(2);
    ll.Insert_at_tail(2);
    ll.Insert_at_tail(1);
    ll.Insert_at_tail(5);
    ll.Insert_at_tail(1);
    ll.display();

    delete_duplicate_node(ll.head);
    ll.display();

    return 0;
}
