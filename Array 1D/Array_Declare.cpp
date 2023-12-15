#include<iostream>
using namespace std;
int main()
{
    int arr1[5]={1,2,3,9,6};
    cout<<"Array 1"<<endl;
    for(int i=0; i<=5; i++)
    {
        cout<<arr1[i]<<" ";
    }
    int arr2[5]={1,2};
    cout<<"Array 2"<<endl;
    for(int i=0; i<=5; i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}