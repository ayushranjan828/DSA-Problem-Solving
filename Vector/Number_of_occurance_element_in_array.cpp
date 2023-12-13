/*
    arr[] = {1,2,1,1,3}
    Enter element = 1
    occurance of 1 is 3 times
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Vector size: ";
    cin>>size;

    vector<int> v(size);
    cout<<"Enter vector element: ";
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }

    int x;
    cout<<"Enter a number: ";
    cin>>x;

    int occurance = 0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==x)
        {
            occurance++;
        }
    }
    cout<<"Number of occurance element: "<<occurance<<endl;
    
    return 0;
}