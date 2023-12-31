/*
    Insertion Sorting
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

    for(int i=1; i<size; i++)
    {
        int current = arr[i];
        int j = i-1;
        while((j>=0) && (arr[j]>current))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    cout<<"Sorted Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}