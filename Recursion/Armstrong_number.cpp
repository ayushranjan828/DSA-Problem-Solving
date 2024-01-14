/*
    Given a number n. Print if it is an armstrong number or not.
    Input: 153
            1^3 + 5^3 + 3^3 = 1 + 125 +27 =153
    Output: Yes
*/
#include<iostream>
using namespace std;

int pow_recursive(int p, int q)
{
    if(q == 0)
    {
        return 1;
    }
    if(q%2 == 0)
    {
        int result = pow_recursive(p, q/2);
        return result * result;
    }
    else
    {
        int result = pow_recursive(p, (q-1)/2);
        return p * result * result;
    }
}

int Arm(int n, int d)
{
    if(n == 0)
    {
        return 0;
    }
    return pow_recursive(n%10, d) + Arm(n/10, d);
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int no_of_digit = 0;
    int temp = n;
    while(temp > 0)
    {
        temp = temp / 10;
        no_of_digit++;
    }
    int result = Arm(n, no_of_digit);
    if(result == n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}