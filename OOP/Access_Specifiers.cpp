#include<iostream>
using namespace std;

class Parent
{
    public:
        int x = 10;

    protected:
        int y = 20;

    private:
        int z = 30;
};

class child_1: public Parent
{
    // x will remain public
    // y will remain protected
    // z will remain not accessible
};

class child_2: private Parent
{
    // x will be private
    // y will be private
    // z will be inaccessible
};

class child_3: protected Parent
{
    // x will be protected
    // y will be protected
    // z will be inaccessible
};

int main()
{
    Parent obj;
    cout<<"X = "<<obj.x<<endl;
    cout<<"Y = "<<obj.y<<endl;  // Not access
    cout<<"Z = "<<obj.z<<endl;  // Not access

    return 0;
}