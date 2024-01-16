/*
    The problem is to count all posible paths on m X n grid from top left (grid[0][0]) to bottom right (grid[m-1][n-1]).

    Having constraints that from each cell you can either move only to right or down.

    Input: m = 2   n = 3
    Output; 3
*/
#include<iostream>
using namespace std;

int fun(int i, int j, int m, int n)
{
    if(i == m-1 and j == n-1)
    {
        return 1;
    }
    if(i >= m or j>= n)
    {
        return 0;
    }
    return fun(i,j+1,m,n) + fun(i+1,j,m,n);
}

int main()
{
    cout<<fun(0,0,2,3);  // First index(row = 0, col = 0) last index(row = 2, col = 3)
    return 0;
}