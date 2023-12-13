/*
    count the number of element strictly greater than input number
    arr[]={1,2,3,4,5}
    Enter a number = 3
    Strictly Grater number = 2
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
        if(v[i]>x)
        {
            occurance++;
        }
    }
    cout<<"Counting strictly greater than number "<<x<<" is: "<<occurance<<endl;
    
    return 0;
}