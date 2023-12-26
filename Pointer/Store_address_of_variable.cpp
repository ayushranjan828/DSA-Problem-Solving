#include<iostream>
using namespace std;
int main()
{
    int x = 10, y = 20;
    int *ptr1 = &x, *ptr2 = &y;
    cout<<"X = "<<x<<endl;
    cout<<"&X = "<<&x<<endl;
    cout<<"&ptr1 = "<<&ptr1<<endl;
    cout<<"ptr1 store address = "<<ptr1<<endl;
    cout<<"Y = "<<y<<endl;
    cout<<"&Y = "<<&y<<endl;
    cout<<"&ptr2 = "<<&ptr2<<endl;
    cout<<"ptr2 store address = "<<ptr2<<endl;
    
    return 0;
}