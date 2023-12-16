/*
    Given an array of integer of size n. Answer q queries where you need to print the sum of values in a given range of indices from l to r (both include).
    Note: The values of l and r in queries follow 1-based indexing.
    arr[] = {5 1 2 3 4}
    l = 2   => arr[] = {5 1}
    r = 4   => arr[] = {5 1 2 3}

    Ans = (prefix sum of r) - (prefix sum of l)
*/
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of Array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter Array element: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int l,r;
    cout<<"Enter size of left prefix L: ";
    cin>>l;
    cout<<"Enter size of right prefix R: ";
    cin>>r;

    int suml = 0;
    for(int i=0; i<l; i++)
    {
        suml = suml + arr[i];
    }
    int sumr = 0;
    for(int i=0; i<r; i++)
    {
        sumr = sumr + arr[i];
    }

    cout<<"Sum of Left prefix: "<<suml<<endl;
    cout<<"Sum of Right prefix: "<<sumr<<endl;

    cout<<"Answer: "<<sumr-suml;
    return 0;
}
