#include<iostream>
using namespace std;

class Sum
{
    public:
        void add(int x, int y)
        {
            int sum = x+y;
            cout<<"Sum1 = "<<sum<<endl;
        }
        void add(int x, int y, int z)
        {
            int sum = x+y+z;
            cout<<"Sum2 = "<<sum<<endl;
        }
        void add(float x, float y)
        {
            float sum = x+y;
            cout<<"Sum3 = "<<sum<<endl;
        }
};

int main()
{
    Sum s;
    s.add(2,3);
    s.add(2,3,4);
    s.add(float(2),float(3.7));
}