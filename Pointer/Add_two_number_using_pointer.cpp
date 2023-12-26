#include<iostream>
using namespace std;
int main()
{
    int x, y, result;
    cin>> x >> y;

    int *ptrx = &x, *ptry = &y;

    result = (*ptrx) + (*ptry);
    cout<<"Sum of X andf Y is "<<result<<endl;

    int *ptr_result = &result;
    cout<<"Sum of X andf Y is "<<*ptr_result;
    
    return 0;
}