/*
    Rotate the given array 'a' by K steps, where K is non-negative.
    Note: K can be greater than 'n' as well where 'n' is the size of array 'a'.

    arr[n] = {1 2 3 4 5}
    k = 1
    arr[n] = {5 1 2 3 4}
    k = 2
    arr[n] = {4 5 1 2 3}

    Solve this problem using vector
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;

    vector <int> v(size);
    cout<<"Enter Array element: ";
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }

    int k;
    cout<<"Enter K-step: ";
    cin>>k;

    k = k % v.size(); // K can be graeter than size

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    cout<<"Rotated Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}