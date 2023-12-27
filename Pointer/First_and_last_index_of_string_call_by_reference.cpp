#include<iostream>
using namespace std;
void find_index(string s, char c, int *pF, int *pL)
{
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == c)
        {
            *pF = i;
            break;
        }
    }
    for(int i=s.size(); i>=0; i--)
    {
        if(s[i] == c)
        {
            *pL = i;
            break;
        }
    }
}
int main()
{
    string s = "aaabbbac";
    char c = 'a';
    int first = -1;
    int last = -1;

    int *pF = &first;
    int *pL = &last;

    find_index(s, c, pF, pL);

    cout<<*pF<<" "<<*pL<<endl;
    cout<<first<<" "<<last<<endl;
    return 0;
}