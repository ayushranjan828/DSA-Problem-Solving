/*
	Reverse an Array
	arr[] = {1,2,3}
	ans = 3,2,1
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
	
	cout<<"Reverse an Array: ";
	for(int i=size-1; i>=0; i--)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
