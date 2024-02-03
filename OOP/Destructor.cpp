#include<iostream>
using namespace std;

class Rectangle
{
    public:
        int l;
        int b;

        // Default constructor - no args passed
        Rectangle()
        {
            l = 0;
            b = 0;
        }

        // Parameterised constructor - args passed
        Rectangle(int x, int y)
        {
            l = x;
            b = y;
        }

        // Copy constructor - initialise an object by another object
        Rectangle(Rectangle& r)
        {
            l = r.l;
            b = r.b;
        }

        // Destructor
        ~Rectangle()
        {
            cout<<"Destructor is called"<<endl;
        }
};

int main()
{
    // Object of Default constructor
    Rectangle r1;
    cout<<r1.l<<" - "<<r1.b<<endl;

    // Object of Parameterised constructor
    Rectangle r2(5,9);
    cout<<r2.l<<" - "<<r2.b<<endl;

    // Object of Copy  constructor
    Rectangle r3 = r2;
    cout<<r3.l<<" - "<<r3.b<<endl;

    return 0; 
}