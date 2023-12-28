/*
    A wild pointer is a type of pointer where the user declare the pointer but not initialise.
*/
#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    cout<<ptr<<" "<<*ptr;
    return 0;
}