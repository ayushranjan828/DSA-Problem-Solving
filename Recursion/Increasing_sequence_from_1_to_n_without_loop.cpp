/*
    Given a number n. Find the increasing sequence from 1 to n without using any loop.
    input = 4
    Output = 1 2 3 4
*/
#include<iostream>
using namespace std;

void fun(int n)
{
    if(n < 1)
    {
        return;
    }
    fun(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Increasing sequence of number: ";
    fun(n);
    return 0;
}