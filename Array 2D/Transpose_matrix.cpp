/*
	Transpose of Matrix
	1 2 3  =  1 4
	4 5 6     2 5
			  3 6	
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
	
	//Transpose of matrix
	cout<<"Transpose of a matrix"<<endl;
	for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
