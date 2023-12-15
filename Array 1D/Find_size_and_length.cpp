#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int size;
    cout<<"Size of arr[] = "<<sizeof(arr)<<endl;
    cout<<"Length of arr[] = "<<sizeof(arr)/sizeof(arr[0]);
    return 0;
}