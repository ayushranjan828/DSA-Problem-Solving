/*
	check size and capacity using push, pop and resize operation
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> v;
	cout<<"Size of V: "<<v.size()<<endl;
	cout<<"Capacity of V: "<<v.capacity()<<endl;
	
	v.push_back(1);
	cout<<"Size of V after push_back(1): "<<v.size()<<endl;
	cout<<"Capacity of V after push_back(1): "<<v.capacity()<<endl;
	
	v.push_back(2);
	cout<<"Size of V after push_back(2): "<<v.size()<<endl;
	cout<<"Capacity of V after push_back(2): "<<v.capacity()<<endl;
	
	v.push_back(3);
	cout<<"Size of V after push_back(3): "<<v.size()<<endl;
	cout<<"Capacity of V after push_back(3): "<<v.capacity()<<endl;
	
	v.resize(5);
	cout<<"Size of V after resize(5): "<<v.size()<<endl;
	cout<<"Capacity of V after resize(5): "<<v.capacity()<<endl;
	
	v.resize(10);
	cout<<"Size of V after resize(10): "<<v.size()<<endl;
	cout<<"Capacity of V after resize(10): "<<v.capacity()<<endl;
	
	v.pop_back();
	cout<<"Size of V after pop_back: "<<v.size()<<endl;
	cout<<"Capacity of V after pop_back: "<<v.capacity()<<endl;
	
	v.pop_back();
	cout<<"Size of V again pop_back: "<<v.size()<<endl;
	cout<<"Capacity of V again pop_back: "<<v.capacity()<<endl;
}
