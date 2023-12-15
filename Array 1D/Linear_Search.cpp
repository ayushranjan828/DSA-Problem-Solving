/*
    arr[] = {1,2,3,4,5}
    key value present return it's index number
    key value not present return -1
*/
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Size of element: ";
    cin>>size;

    int arr[size];
    cout<<"Enter elements: ";
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

    int key;                                //Linaer search Algo
    int ans = -1;
    cout<<"Enter Key: ";
    cin>>key;
    for(int i=0; i<size; i++)
    {
        if(key == arr[i])
        {
            ans = i;
            break;// We also use break for better performance and good coding practice;
        }
    }
    cout<<"Key element is present it return "<<ans;

    return 0;
}