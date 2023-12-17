#include<iostream>
using namespace std;
int main()
{
    //For 1st matrix
    int r1,c1;
    cout<<"Enter Row: ";
    cin>>r1;
    cout<<"Enter Column: ";
    cin>>c1;

    int arr1[r1][c1];
    cout<<"Enter Elements in 1st matrix: ";
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin>>arr1[i][j];
        }
    }

    cout<<"Element of 1st matix:"<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //For 2nd matrix
    int r2,c2;
    cout<<"Enter Row: ";
    cin>>r2;
    cout<<"Enter Column: ";
    cin>>c2;

    int arr2[r2][c2];
    cout<<"Enter Elements in 2nd matrix: ";
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cin>>arr2[i][j];
        }
    }

    cout<<"Element of 2nd matix:"<<endl;
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // matrix multiplication
    if(c1 != c2)
    {
        cout<<"Matrix Multiplication not possible."<<endl;
    }
    
    int multi[r1][c2];
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            int value = 0;
            for(int k=0; k<r2; k++)
            {
                value += arr1[i][k] * arr2[k][j];
            }
            multi[i][j] = value;
        }
    }

    cout<<"Multiplication of Matrix 1 and Matrix 2: "<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<<multi[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}