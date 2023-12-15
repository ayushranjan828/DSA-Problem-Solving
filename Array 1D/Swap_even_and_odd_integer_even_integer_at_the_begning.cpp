/*
    Given an Array of integer 'a', move all the even integers 
    at the beginning of the array followed by all the odd integers. 
    The relative order of odd or even integers does not matters. 
    Return any array that satisfies the condition.

    orignal
    arr[] = {1 2 3 4 5}
    left swap-->            <--right swap
    sorted
    arr[] = {4 2 1 3 5}
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

    int left_ptr = 0;     // Agorithm for swap using two way pointer.
    int right_ptr = size - 1;
    while(left_ptr < right_ptr)
    {
        if(arr[left_ptr]%2 == 1 && arr[right_ptr]%2 == 0)
        {
            //swap(arr[left_ptr],arr[right_ptr]);
            int flag;
            flag = arr[left_ptr];
            arr[left_ptr] = arr[right_ptr];
            arr[right_ptr] = flag;
            /*---------------------------------*/
            left_ptr++;
            right_ptr--;
        }
        if(arr[left_ptr]%2 == 0)
        {
            left_ptr++;
        }
        if(arr[right_ptr]%2 == 1)
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