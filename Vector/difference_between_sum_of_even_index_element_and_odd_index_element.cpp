/*
    check array is shorted or not
    arr[] = {1,2,3,4,5}
    sum of even index element = 1+3+5 = 9
    sum of even index element = 2+4 = 6
    Difference of even and odd element = 9-6 = 3
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

    int sum = 0;            
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]%2==0)             
        {
            sum += v[i];
        }
        else
        {
            sum -= v[i];
        }
    }
    cout<<"Difference between sum of even index number and odd index number: "<<sum;
    
    return 0;
}