/*
    Given a square matrix, turn it by 90 degrees in a clockwise direction without using any extra space.

    1 2 3       7 4 1
    4 5 6   =   8 5 2
    7 8 9       9 6 3
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
    cout<<"Enter Elements in matrix: ";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Element of matix:"<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
	
	// Transpose of matrix
    for(int i=0; i<r; i++)
    {
        for(int j=i+1; j<r; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

   //Reversing each row of the matrix
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r/2; j++)
        {
            swap(arr[i][j], arr[i][r-j-1]);
        }
   }

    //Print the matrix
    cout<<"Rotated Matrix :\n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<r; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
   }
    return 0;
}
