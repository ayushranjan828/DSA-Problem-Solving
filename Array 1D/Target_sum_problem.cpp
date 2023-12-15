/*
	Target sum problem.
	arr[] = {3,4,6,7,1}
	target sum = 7
	sum of 3,4 and 6,1 is 7
	Answer is 2 because  pair is 2
*/
#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size: ";
	cin>>size;
	
	int arr[size];
	cout<<"Enter element: ";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	int ts;
	cout<<"Enter Target Sum: ";
	cin>>ts;
	
	int pair=0;
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(arr[i]+arr[j] == ts)
			{
				pair++;
			}
		}
	}
	cout<<"Number of pair for target sum is "<<pair;
	
	return 0;
}
