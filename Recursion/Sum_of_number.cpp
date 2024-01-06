/*
    Find the sum of digits using recursion.
    number = 123
    add = 1 + 2 + 3 = 6
*/
#include<iostream>
using namespace std;

int sum(int n)
{
    if(n>=0 && n<=9)
    {
        return n;
    }
    int add;
    add = sum(n/10) + sum(n%10);
    return add;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int s = sum(n);
    cout<<"Sum of number "<<n<<" is "<<s;
}