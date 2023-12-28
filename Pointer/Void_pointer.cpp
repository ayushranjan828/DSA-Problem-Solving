/*
    Void pointer is a special type of pointer that can point to any datatype values.
    Void pointer cannot be dereference. 
    By accessing it we use type type casting.
*/
#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    float f = 9.6;
    void *ptr1 = &x; // We cannot assing integer value into floting pointer so we use void pointer.
    void *ptr2 = &f;

    // Type Casting
    int *int_pointer1 = (int *)ptr1;
    float *int_pointer2 = (float *)ptr2;

    cout<<"*ptr1 = "<<*int_pointer1<<endl;
    cout<<" ptr1 = "<<int_pointer1<<endl;

    cout<<"*ptr2 = "<<*int_pointer2<<endl;
    cout<<" ptr2 = "<<int_pointer2<<endl;

    return 0;
}