/*
    print the maximum value of the array [3 10 3 2 5 ] using recursion
*/
#include<iostream>
using namespace std;

int fun(int *arr, int index, int n)
{
    if(index == n-1)
    {
        return arr[index];
    }
    int maximum = max(arr[index], fun(arr, index+1, n));
    return maximum;
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

    cout<<"Maximum element is in array: "<<fun(arr, 0, n);

    return 0;
}