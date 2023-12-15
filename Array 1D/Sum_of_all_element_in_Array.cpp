/*
    Sum of all element in array
    arr[] = {1,2,3,4}
    answer = 10
*/
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Size of Array: ";
    cin>>size;
    int arr[size];

    cout<<"Enter elements: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Given Array is: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    int ans = 0;
    for(int i=0; i<size; i++)
    {
        ans = ans + arr[i];
    }
    cout<<"\n Sum of Array is: "<<ans;
    return 0;
}