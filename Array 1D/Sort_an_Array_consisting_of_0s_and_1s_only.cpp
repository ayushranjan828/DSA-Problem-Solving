/*
    sort an array consisting of 0s and 1s only.
    orignal
    arr[] = {1 0 1 0 0 1 1 0}
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

    int count = 0;
    for(int i=0; i<size; i++)
    {
        if(arr[i] == 0)
        {
            count++;
        }
    }
    for(int i=0; i<size; i++)
    {
        if(i < count)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }

    cout<<"Sorted Array for 0s and 1s: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}