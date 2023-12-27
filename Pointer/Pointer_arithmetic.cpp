/* 
    Move next memory blocks in RAM.
*/

#include<iostream>
using namespace std;
int main()
{
    int x = 7;
    double y = 9.6;

    int *ptr_int = &x;
    double *ptr_double = &y;

    cout<<"Size of X is "<<sizeof(x)<<endl;
    cout<<"Size of Y is "<<sizeof(y)<<endl;

    cout<<"ptr_int address = "<<ptr_int<<"   "<<"ptr_int + 1 address = "<<ptr_int + 1<<endl;
    cout<<"ptr_int address = "<<ptr_int<<"   "<<"ptr_int + 2 address = "<<ptr_int + 2<<endl;
    cout<<"ptr_double address = "<<ptr_double<<"   "<<"ptr_double + 1 address = "<<ptr_double + 1<<endl;
    cout<<"ptr_double address = "<<ptr_double<<"   "<<"ptr_double + 2 address = "<<ptr_double + 2<<endl;
    // Increment address of operator in memory blocks
    return 0;
}