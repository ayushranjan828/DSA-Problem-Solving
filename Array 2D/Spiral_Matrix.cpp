/*
    Given a nXm matrix 'arr', return all elements of the matrix in spiral order.

    1 2 3      
    4 5 6 
    7 8 9     

    Sprial Matrix elements = 1 2 3 6 9 8 7 4 5  
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
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
	
	int i, left = 0, right = c-1, top = 0, bottom = r-1;
	while((left <= right) && (top <= bottom))
	{
	    // Print First row
	    for(i=left; i<=right; i++)
	    {
	        cout<<arr[top][i]<<" ";
	    }
	    top++;
	    //print Last column
	    for(i=top; i<=bottom; i++)
	    {
	        cout<<arr[i][right]<<" ";
	    }
	    right--;
	    //print last row
	    if(top <= bottom)
	    {
    	    for(i=right; i>=left; i--)
    	    {
    	        cout<<arr[bottom][i]<<" ";
    	    }
    	    bottom--;
	    }
	    //print first column
	    if(left <= right)
	    {
    	    for(i=bottom; i>=top; i--)
    	    {
    	        cout<<arr[i][left]<<" ";
    	    }
    	    left++;
	    }
	}
    return 0;
}
