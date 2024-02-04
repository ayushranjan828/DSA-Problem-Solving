/*
    Multi-level Inheritance
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

class Child: public Parent
{
    public:
        Child()
        {
            cout<<"Child class"<<endl;
        }
};

class Grandchild: public Child
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
    Child obj2;
    cout<<"------"<<endl;
    Grandchild obj3;

    return 0;
}