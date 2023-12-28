/*
    A Null pointer is a type of pointer, if we want to have a pointer variable which is just declared but will get address later to store.
*/
#include<iostream>
using namespace std;
int main()
{
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    cout<<ptr1<<" "<<*ptr1<<endl;
    cout<<ptr2<<" "<<*ptr2<<endl;
    /*
        It gives 0.
        0 is mostly a special reserved memory address.
    */

    return 0;
}