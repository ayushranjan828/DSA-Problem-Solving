/*
    check array is shorted or not
    arr[] = {1,2,3,4,5}
    shorted return 1
    arr[] = {1,2,3,9,5}
    shorted return 0
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

    bool shot_flag = true;            //Algorithm
    for(int i=1; i<v.size(); i++)
    {
        if(v[i]<=v[i-1])              //Shorting
        {
            shot_flag = false;
        }
    }
    cout<<"Given array is Shorted ? -> "<<shot_flag;
    
    return 0;
}