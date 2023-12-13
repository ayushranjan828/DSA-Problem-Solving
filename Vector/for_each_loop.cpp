/*
	using For Loop take input from user and print it.
	Without declaring size of vector.
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
	for(int ele:v)
	{
		cout<<ele<<" ";
	}
	cout<<endl;
	return 0;
}
