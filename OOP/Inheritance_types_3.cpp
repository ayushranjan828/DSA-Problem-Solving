/*
    Multiple Inheritance
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

class Child: public Parent1, Parent2
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
    Parent1 obj1;
    cout<<"------"<<endl;
    Parent2 obj2;
    cout<<"------"<<endl;
    Child obj3;
    cout<<"------"<<endl;
    Grandchild obj4;

    return 0;
} 