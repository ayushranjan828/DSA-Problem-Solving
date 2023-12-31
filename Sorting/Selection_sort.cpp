/*
    Selection Sort
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
        int min_index = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }
        if(min_index != i)
        {
            swap(arr[i],arr[min_index]);
        }
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}