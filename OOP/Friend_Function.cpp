#include<iostream>
using namespace std;

class Fun
{
    int x;
    public:
        Fun(int y)
        {
            x = y;
        }
        friend void print(Fun &obj);
};

void print(Fun &obj)
{
    cout<<obj.x<<endl;
}

int main()
{
    Fun obj(5);
    print(obj);
    return 0;
}