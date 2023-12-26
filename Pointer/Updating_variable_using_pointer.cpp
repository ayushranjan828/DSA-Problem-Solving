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
    
    x = 25; // Old value of x is 10 now, X changes to 25
    cout<<"X = "<<x<<endl;
    cout<<"*ptr = "<<*ptr<<endl; // *ptr = 25 using Dereference operator we can access address content

    // Updating X value as 11
    *ptr = 11;
    cout<<"X = "<<x<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    return 0;
}