#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int *ptr = &x;
    cout<<"X = "<<x<<endl;  // 10
    cout<<"&X = "<<&x<<endl;  // &X = 0x7fff3e75c9ac
    cout<<"ptr = "<<ptr<<endl;  // ptr = 0x7fff3e75c9ac ptr hold address of x
    cout<<"&ptr = "<<&ptr<<endl; // &ptr = 0x7fff3e75c9a0 address of ptr
    cout<<"*ptr = "<<*ptr<<endl; // *ptr = 10  Dereference operator
    
    return 0;
}