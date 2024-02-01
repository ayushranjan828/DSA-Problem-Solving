#include<iostream>
using namespace std;

class Fruits
{
    public:
        string name;
        string colour;
};

int main()
{
    // Creating object
    Fruits obj;
    obj.name = "Apple";
    obj.colour = "Red";
    cout<<obj.name<<" - "<<obj.colour<<endl;

    // Another method is used to create object
    Fruits *obj1 = new Fruits();
    obj1->name = "Banana";
    obj1->colour = "Yellow";
    cout<<obj1->name<<" - "<<obj1->colour<<endl;

    return 0;
}
