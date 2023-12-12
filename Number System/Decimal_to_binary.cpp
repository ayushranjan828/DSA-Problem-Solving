/*
    5 (Decimal) = 101 (Binary)
    parity digit (remainder) = 1 parity odd of number
    parity digit (remainder) = 0 parity even of number
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Decimal digit: ";
    cin>>n;

    int ans=0;
    int power = 1;
    while(n>0)
    {
        int paritydigit = n % 2;
        ans = ans + (paritydigit * power);
        power = power * 10;
        n = n / 2;
    }
    cout<<"Binary: "<<ans;
    return 0;
}