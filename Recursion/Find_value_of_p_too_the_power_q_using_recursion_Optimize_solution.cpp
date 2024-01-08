/*
    Given two numbers P & Q, find the value P^Q using a recursive function.
    Optimize solution
*/
#include<iostream>
using namespace std;

int pow(int p, int q)
{
    if(q==0) // Power is 0
    {
        return 1;
    }
    if(q%2==0) // If Q is even
    {
        int power = pow(p, q/2);
        return power * power;
    }
    else // If Q is odd
    {
        int power = pow(p, (q-1)/2);
        return p * power * power;
    }
}

int main()
{
    int p, q;
    cout<<"Enter value of p: ";
    cin>>p;
    cout<<"Enter value of q: ";
    cin>>q;

    cout<<"Answer of "<<p<<" ^ "<<q<<" is "<<pow(p,q);
    return 0;
}