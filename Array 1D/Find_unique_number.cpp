/*
	find the unique number in a given Array where all the element are begin repeated twice with one value being unique.
	arr[] = {2,3,1,3,2,4,1}
	4 is unique
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
	
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(arr[i] == arr[j])
			{
				arr[i]=arr[j]=-1;
			}
		}
	} 
	
	// Now print array which has -1
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	//Unique Number printing
	int unique=0;
	for(int i=0; i<size; i++)
	{
		if(arr[i]>0)
		{
			unique = arr[i];
			cout<<"Unique number is: "<<unique<<endl;
		}
	}

	return 0;
}
