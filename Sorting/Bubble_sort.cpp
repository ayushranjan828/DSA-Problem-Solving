/*
    Bubble Sorting
    arr[5] = {7 3 8 1 5}
    sorted array = 1 3 5 7 8
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

    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
