/*
    Given Q queries, check if the given number is present in the array or not.
    Note: Value of all the elements in the array is less than 10 to the power 5.
    arr[] = {1 1 2 4 4 4 3}
    Enter number of query: 2
    2 Present at 1 time's
    4 Present at 3 time's
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;

    vector <int> arr(size);
    cout<<"Enter Array element: ";
    for(int i=0; i<arr.size(); i++)
    {
        cin>>arr[i];
    }

    const int N = 1e5 + 10;  //10^5    it for pre-processing data
    vector <int> freq(N,0);

    for(int i=0; i<arr.size(); i++)
    {
        freq[arr[i]]++;
    }

    int q;
    cout<<"Enter number of Queries: ";
    cin>>q;
    while(q--)
    {
        int queryelement;
        cout<<"Enter Queries: ";
        cin>>queryelement;
        cout<<queryelement<<" present at "<<freq[queryelement]<<" times."<<endl;
    }

    return 0;
}