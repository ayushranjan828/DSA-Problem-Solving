/*
    Hierarchical Inheritance
*/

#include<iostream>
using namespace std;

class Parent
{
    public:
        Parent()
        {
            cout<<"Parent class"<<endl;
        }
};

class Child1: public Parent
{
    public:
        Child1()
        {
            cout<<"Child 1 class"<<endl;
        }
};

class Child2: public Parent
{
    public:
        Child2()
        {
            cout<<"Child 2 class"<<endl;
        }
};

class Grandchild: public Child1, public Child2
{
    public:
        Grandchild()
        {
            cout<<"Grand Child class"<<endl;
        }
};

int main()
{
    Parent obj1;
    cout<<"------"<<endl;
    Child1 obj2;
    cout<<"------"<<endl;
    Child2 obj3;
    cout<<"------"<<endl;
    Grandchild obj4;

    return 0;
} 