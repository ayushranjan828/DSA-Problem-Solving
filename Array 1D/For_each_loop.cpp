#include<iostream>
using namespace std;
int main()
{
    int arr1[] = {1,7,9};
    for(int ele:arr1)
    {
        cout<<ele<<endl;
    }
    cout<<endl;
    char arr2[] = {'a','b','c'};
    for(char ele:arr2)
    {
        cout<<ele<<endl;
    }
    return 0;
}