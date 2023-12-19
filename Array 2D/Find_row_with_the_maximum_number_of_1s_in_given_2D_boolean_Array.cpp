/*
    Given a boolean 2D array, where each rows sorted. Find the row with the maximum number of 1s.
*/
#include<iostream>
using namespace std;
int main()
{
     int r,c;
    cout<<"Enter number of row: ";
    cin>>r;
    cout<<"Enter number of column: ";
    cin>>c;

    cout<<"Enter element of Array: ";
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Your enter Array" <<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
   // Finding number of 1s
    int count = 0;
    int rowindex = -1;
    for(int i=0; i<r; i++)
    {
        int rowcount = 0;
        for(int j=0; j<c; j++)
        {
            if(arr[i][j] == 1)
            {
                rowcount +=1;
            }
            if(rowcount > count)
            {
                count = rowcount;
                rowindex = i;
            }
        }
    }
    cout<<"Maximum count in a row: "<<count<<endl;
    cout<<"Row Index: "<<rowindex<<endl;
    cout<<"Row Number: "<<rowindex+1<<endl;
    return 0;
}