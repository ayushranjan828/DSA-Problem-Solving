/*
#include<iostream>
using namespace std;
void swap(int x , int y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x = 10, y = 20;
    swap(x,y);
    cout<<x<<" "<<y<<endl; // It access X and Y from scope of main

    return 0;
}
*/

// Output X = 10, Y = 20
// To avoid this situation we use pointer variable

#include<iostream>
using namespace std;
void swap(int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x = 10, y = 20;
    
    int *ptr1 = &x;
    int *ptr2 = &y;
    swap(*ptr1,*ptr2);
    cout<<*ptr1<<" "<<*ptr2<<endl;
    return 0;
}

// Output X = 20, Y = 10