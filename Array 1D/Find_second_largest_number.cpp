/*
    Find Second largest element.
    arr[]={1,9,4,8,2}
    second largest element = 8
*/

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;

    int arr[size];
    cout<<"Enter Array element: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int largest = arr[0];              
    for(int i=0; i<size; i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    int sec_largest = arr[0];              
    for(int i=0; i<size; i++)
    {
        if(arr[i]>sec_largest)
        {
            if(arr[i] != largest)
            {
                sec_largest = arr[i];
            }
        }
    }
    cout<<"Second largest element in Array: "<<sec_largest;
    return 0;
}