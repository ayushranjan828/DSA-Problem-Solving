/*
    Hierarchical Inheritance
*/

#include<iostream>
using namespace std;

class Parent1
{
    public:
        Parent1()
        {
            cout<<"Parent 1 class"<<endl;
        }
};

class Parent2
{
    public:
        Parent2()
        {
            cout<<"Parent 2 class"<<endl;
        }
};

class Child1: public Parent1
{
    public:
        Child1()
        {
            cout<<"Child 1 class"<<endl;
        }
};

class Child2: public Parent1
{
    public:
        Child2()
        {
            cout<<"Child 2 class"<<endl;
        }
};

class Grandchild: public Child1
{
    public:
        Grandchild()
        {
            cout<<"Grand Child class"<<endl;
        }
};

int main()
{
    Parent1 obj1;
    cout<<"------"<<endl;
    Parent2 obj2;
    cout<<"------"<<endl;
    Child1 obj3;
    cout<<"------"<<endl;
    Child2 obj4;
    cout<<"------"<<endl;
    Grandchild obj5;

    return 0;
} 