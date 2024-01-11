/*
    Given an array, print all element of array recursively.
*/
#include<iostream>
using namespace std;

void fun(int *arr, int index, int n)
{
    if(index == n)
    {
        return;
    }
    cout<<arr[index]<<endl;
    fun(arr, index+1, n);
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter element of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Element of array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    fun(arr, 0, n);

    return 0;
}