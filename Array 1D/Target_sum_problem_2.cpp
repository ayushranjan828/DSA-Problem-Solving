/*
	Target sum problem.
	arr[] = {3,4,6,7,1}
	target sum = 7
	find triplet whose sum is 7.
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
	
	int triplet=0;
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			for(int k=j+1; k<size; k++)
			{
				if(arr[i]+arr[j]+arr[k] == ts)
				{
					triplet++;
				}
			}
		}
	}
	cout<<"Number of triplet for target sum is "<<triplet;
	
	return 0;
}
