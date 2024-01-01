/*
    Given an integer array arr, move all 0's to the end of it while maintaining the relative order of non-Zero elements.
    NOTE that you must do in place without manking a copy of the array.

    Input:- 0 5 0 3 42
    Output:- 5 3 42 0 0
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

    for(int i=size-1; i>=0; i--)
    {
        int j = 0;
        bool flag = false;
        while(j != i)
        {
            if((arr[j] == 0) && (arr[j+1] != 0))
            {
                swap(arr[j],arr[j+1]);
                flag = true;
            }
            j++;
        }
        if( ! flag)
        {
            break;
        }
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}