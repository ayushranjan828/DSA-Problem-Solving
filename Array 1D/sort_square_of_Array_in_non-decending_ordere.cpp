/*
    Given an Array of integer 'a' sorted in non-decreasing order, 
    return an array of square of each number sorted in non-decreasing oeder.

    orignal
    arr[] = {-10 -3 2 4 5}
    ------------------------
    absolute value
    arr[] = {10 3 2 4 5}
    left swap-->            <--right swap
    ------------------------
    sorted
    arr[] = {10 5 4 3 2}
    ------------------------
    square od arrar
    arr[] = {100 25 16 9 4}
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

    int arr1[size];   // Agorithm for sort 
    int left_ptr = 0;     
    int right_ptr = size - 1;
    for(int i=0; left_ptr < right_ptr; i++)
    {
        if(abs(arr[left_ptr]) <= abs(arr[right_ptr]))
        {
            arr1[i] = (arr[right_ptr]*arr[right_ptr]);  
            right_ptr--;
        }
        else
        {
            arr1[i] = (arr[left_ptr]*arr[left_ptr]);  
            left_ptr++;
        }
        
    }

    cout<<"Sorted Array : ";
    for(int i=0; i<size; i++)
    {
        cout<<arr1[i]<<" ";
    }

    return 0;
}