/*
    Given two numbers P & Q, find the value P^Q using a recursive function.
*/
#include<iostream>
using namespace std;

int pow(int p, int q)
{
    if(q==0) // Power is 0
    {
        return 1;
    }
    int power = p * pow(p, q-1);
    return power;
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