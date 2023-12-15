/*
    Rotate the given array 'a' by K steps, where K is non-negative.
    Note: K can be greater than 'n' as well where 'n' is the size of array 'a'.

    arr[n] = {1 2 3 4 5}
    k = 1
    arr[n] = {5 1 2 3 4}
    k = 2
    arr[n] = {4 5 1 2 3}
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

    int k;
    cout<<"Enter K-step: ";
    cin>>k;

    k = k % size; // K can be graeter than size

    int arr1[size]; //Emptey array (We use extra memory)
    int j=0;
    for(int i=size-k; i<size; i++) //Inserting K element
    {
        arr1[j++] = arr[i];
    }
    for(int i=0; i<size; i++) //Inserting n-k element
    {
        arr1[j++] = arr[i];
    }

    cout<<"Rotated Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr1[i]<<" ";
    }

    return 0;
}