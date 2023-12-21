/*
    Given a matrix 'a' of dimension nXm and 2 co-ordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2).

    1 2 3
    4 5 6
    7 8 9

    Co-ordinate (1,1) and (2,2)
    5 + 6 + 8 + 9 = 28
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
    cout<<endl;
	
	int s1,s2,e1,e2;
	cout<<"Enter coordinate l1: ";
	cin>>s1;
	cout<<"Enter coordinate e1: ";
	cin>>e1;
	cout<<"Enter coordinate l2: ";
	cin>>s2;
	cout<<"Enter coordinate e2: ";
	cin>>e2;
	int Sum = 0;
	for(int i=s1; i<=s2; i++)
	{
	    for(int j=e1; j<=e2; j++)
	    {
	        Sum += arr[i][j];
	    }
	}
	cout<<"Sum of rectangle: "<<Sum;
    return 0;
}
