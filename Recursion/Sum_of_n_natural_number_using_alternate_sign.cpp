/*
    Given a number n. Find the sum of natural numbers till n but with alternate signs.
    That means if n = 5 then you have to return 1 - 2 + 3 - 4 + 5 = 3 as your answer.
*/
#include<iostream>
using namespace std;

int fun(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return fun(n-1) + ((n%2 == 0) ? (-n) : n);
}

int main()
{
    int n,k;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<fun(n);
    return 0;
}