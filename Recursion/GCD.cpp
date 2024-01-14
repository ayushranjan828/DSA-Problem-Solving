/*
    Given two numbers x and y. Find the greatest common divisor of x and y using recursions.
    Input:- X = 40, Y = 48
    output:- 8
    Input:- X = 12, Y = 20
    output:- 4
*/
#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b > a)
    {
        return gcd(b,a);
    }
    if(b == 0)
    {
        return a;
    }
    return gcd(b,a%10);
}

int main()
{
    int x = 40;
    int y = 48;
    cout<<gcd(x,y);
    return 0;
}