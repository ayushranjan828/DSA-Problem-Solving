/*
    Given a number and a value k. Print k multipliaction of number.
    Number = 5
    k = 12
    Output = 12 24 36 48 60
*/
#include<iostream>
using namespace std;

void fun(int n, int k)
{
    if(k == 0)
    {
        return;
    }
    fun(n,k-1);
    cout<<k*n<<" ";
}

int main()
{
    int n,k;
    cout<<"Enter value of k number: ";
    cin>>n;
    cout<<"Enter a number: ";
    cin>>k;
    cout<<"Increasing sequence of number: ";
    fun(n,k);
    return 0;
}