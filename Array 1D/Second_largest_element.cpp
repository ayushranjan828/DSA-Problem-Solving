/*
	Find second largest number.
	arr[] = {2,3,5,7,6,1}
	Second largest element = 6.
*/
/*
	find the unique number in a given Array where all the element are begin repeated twice with one value being unique.
	arr[] = {2,3,1,3,2,4,1}
	4 is unique
*/
#include<iostream>
using namespace std;

int largestElementIndex(int arr[], int size)
{
	int max=INT_MIN;
	int maxindex=-1;
	for(int i=0; i<size; i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			maxindex=i;
		}	
	}
	return maxindex;	
}

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
	
	int indexoflargest = largestElementIndex(arr[],size);
	
	arr[indexoflargest]=-1;
	int indexofsecondlargest = largestElementIndex(arr[size],size);
	cout<<"Second largest element in array: "<<arr[indexofsecondlargest]<<endl;
	
	return 0;
}
