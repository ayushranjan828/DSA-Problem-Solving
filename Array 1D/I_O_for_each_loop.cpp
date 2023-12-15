#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<size;
    char vowel[size];
    for(char &ele:vowel[size])
    {
        cin>>ele;
    }
    for(int i=0; i<=size; i++)
    {
        cout<<vowel[i]<<" ";
    }
    return 0;
}
