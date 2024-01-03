/*
    Find factorial of number using recursion

    5! = 5x4x3x2x1 = 120
*/
#include<iostream>
using namespace std;

int fact(int n)
{
    if((n==1) || (n==0))
    {
        return 1;
    }
    int ans = 1;
    ans = n * fact(n-1);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a number = ";
    cin>>n;

    fact(n);
    cout<<"Factorial of "<<n<<" is "<<fact(n);

    return 0;
}
