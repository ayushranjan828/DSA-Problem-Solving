/*
    sort an array consisting of 0s and 1s only using two way pointer.
    orignal
    arr[] = {1 0 1 0 0 1 1 0}
    left swap-->            <--right swap
    sorted
    arr[] = {0 0 0 0 1 1 1 1}
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

    int left_ptr = 0;     // Agorithm for two sorting using two way pointer.
    int right_ptr = size - 1;
    while(left_ptr < right_ptr)
    {
        if(arr[left_ptr] == 1 && arr[right_ptr] == 0)
        {
            arr[left_ptr++] = 0;
            arr[right_ptr--] = 1;
        }
        if(arr[left_ptr] == 0)
        {
            left_ptr++;
        }
        if(arr[right_ptr] == 1)
        {
            right_ptr--;
        }
    }

    cout<<"Sorted Array for 0s and 1s: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}