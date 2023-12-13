/*
	while loop
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> v;
	int size;
	cout<<"Enter Size: ";
	cin>>size;
	
	cout<<"Enter element: ";
	for(int i=0; i<size; i++)
	{
		int element;
		cin>>element;
		v.push_back(element);
	}
	
	cout<<"Entered elements are: ";
	int index=0;
	while( index < v.size() )
	{
		cout<<v[index++]<<" ";
	}
	return 0;
}
