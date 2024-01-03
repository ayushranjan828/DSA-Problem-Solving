/*
    Find nth fibonacci number.

    series = 0 1 1 2 3 5 8 12 ....
    1 -> 1
    2 -> 1
    3 -> 2
    4 -> 3
    5 -> 5
    6 -> 8
*/
#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if((n == 0) || (n == 1))
    {
        return n;
    }
    int add = fibonacci(n-1) + fibonacci(n-2);
    return add;
}

int main()
{
    int n;
    cout<<"Enter a number = ";
    cin>>n;

    fibonacci(n);
    cout<<"Fibonacci of "<<n<<" is "<<fibonacci(n);

    return 0;
}