/*
    arr[] = {1,2,1,1,3}
    Enter element = 1
    Last occurance index of element is: 3
    Last occurance element position is: 4
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

    int occurance = -1;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]==x)
        {
            occurance = i;
        }
    }
    cout<<"Last occurance index of element is: "<<occurance<<endl;
    cout<<"Last occurance element position is: "<<occurance+1<<endl;

    /*--------------------------------Method 2 (Reverse traversing)----------------------------------------*/
    cout<<"--------------------------------Method 2--------------------------------------------------"<<endl;
    for(int i=v.size(); i>=0; i--)
    {
        if(v[i]==x)
        {
            occurance = i;
            break;
        }
    }
    cout<<"Last occurance index of element is: "<<occurance<<endl;
    cout<<"Last occurance element position is: "<<occurance+1<<endl;

    return 0;
}