/*
    Given an integer array 'a' return the prefix sum/running sum in the same array without creating a new array.

    arr[] = {5 4 1 2 3}
    after prefix sum
    arr[] = {5 9 10 12 15}
*/
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of Array: ";
    cin>>size;

    int arr[size];
    cout<<"Element of Array: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int sum = 0;
    int arr1[size];
    for(int i=0; i<size; i++)
    {
        sum = arr[i] + sum;
        arr1[i] = sum;
    }

    cout<<"Prefix sum of Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}