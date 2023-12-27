/*
    Pointer Arithmatic operation in Array
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[3] = {1,5,10};
    int *ptr = &arr[0];

    cout<<"ptr = "<<ptr<<" arr[0] = "<<*ptr<<endl;
    cout<<"ptr+1 = "<<ptr+1<<" arr[0+1] = "<<*(ptr+1)<<endl;

    cout<<"arr[0] = "<<arr[0]<<" arr[1] = "<<arr[1]<<" arr[2] = "<<arr[2]<<endl;
    cout<<"*ptr++ = "<<*ptr++<<" *ptr++ = "<<*ptr<<endl;
    cout<<"ptr = "<<ptr<<" *ptr = "<<*ptr<<endl;
    return 0;
}