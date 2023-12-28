/*
    Dangling pointer is a type of pointer that points to a momory location that is not valid.
*/
#include<iostream>
using namespace std;
int main()
{
    int *ptr = NULL;
    {
        //int *ptr = NULL;
        int x = 10;
        ptr = &x;
        cout<<"X = "<<ptr<<endl;
        cout<<"X = "<<*ptr<<endl;
    }
    /*
        we cann't access it, if we remove pointer which is declare outside.
    */
    cout<<"X = "<<ptr<<endl;
    cout<<"X = "<<*ptr<<endl;
}