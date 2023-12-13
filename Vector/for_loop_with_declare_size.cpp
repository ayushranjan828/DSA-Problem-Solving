/*
	using For Loop take input from user and print it.
	With declaring size of vector.
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> v(5);
	int size;
	cout<<"Enter Size: ";
	cin>>size;
	
	cout<<"Enter element: ";
	for(int i=0; i<size; i++)
	{
		cin>>v[i];
	}
	
	cout<<"Entered elements are: ";
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
