/*
    Remove all the occurrences of 'a' from string s = "abcax".
    Answer = bcx
*/
#include<iostream>
using namespace std;

string fun(string &s, int index, int n)
{
    if(index == n)
    {
        return "";
    }
    string current = "";
    current += s[index];
    return ((s[index] == 'a') ? "" : current) + fun(s, index+1, n);
}

int main()
{
    string s = "abcax";
    int n = 5;
    cout<<"After removing a from string: "<<fun(s,0,n);
    return 0;
}