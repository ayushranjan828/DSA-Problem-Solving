/*
    Given an array of n integers and a target value x. Print whether x exists in the array or not.
    Input: n = 5
           arr[] = {1 2 3 4 5}
           key = 4
    Output: YES
*/
#include<iostream>
using namespace std;

bool fun(int *arr, int n, int i, int x)
{
    if(i == n)
    {
        return false;
    }
    return (arr[i] == x) || fun(arr, n, i+1, x);
}

int main()
{
    int arr[] = {5,4,1,8,6,-9,8,2,3,5};
    int n = 10;
    int x = 8;
    bool result = fun(arr, n, 0, x);
    if(result)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}