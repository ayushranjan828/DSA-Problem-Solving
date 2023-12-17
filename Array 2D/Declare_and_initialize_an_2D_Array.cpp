/*
    row = 2
    column = 3
    2D Array: 1 2 3
              4 5 6
*/
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter Row: ";
    cin>>r;
    cout<<"Enter Column: ";
    cin>>c;

    int arr[r][c];
    cout<<"Enter Elements in 2D Array ";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Element of 2D Array:"<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Element at 1st row and 3rd column: "<<arr[0][2];
    return 0;
}
