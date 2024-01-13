/*
    Write a program to check whether a given number is palindrom or not.
*/
#include<iostream>
using namespace std;

bool fun(int num, int *temp)
{
    if(num >= 0 && num <= 9)
    {
        int last_digit_temp = (*temp)%10;
        (*temp) /= 10;
        return (num == last_digit_temp);
    }
    bool result = (fun(num/10, temp) and (num%10) == ((*temp)%10));
    (*temp) /= 10;
    return result;
}

int main()
{
    int num = 1441;
    int another_num = num;
    int *temp = &another_num;
    cout<<fun(num, temp);

    return 0;
}