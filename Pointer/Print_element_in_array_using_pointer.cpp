#include<iostream>
using namespace std;
void process(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<*(arr + i)<<endl;
    }
}
int main()
{
    int arr[5] = {5,1,2,7,3};
    process(arr,5);
    return 0;
}