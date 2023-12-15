/*
    arr[]={1,9,4,8,2}
    Max element = 9
*/

#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Given Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int max = arr[0];              // Algo to find Max element in an Array
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    cout<<"Maximum element in Array: "<<max;
    return 0;
}