#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[101][101], x[101][101], m, n , res;
int s = 0;
void Backtrack(int i , int j)
{
    if(i == n - 1 && j == m - 1)
    {
        ++res;
        return;
    }
    if(i + 1 < n && x[i + 1][j])
    {
        x[i + 1][j] = 0;
        Backtrack(i + 1, j);
        x[i + 1][j] = 1;
    }
    if(j + 1 < m && x[i][j + 1])
    {
        x[i][j + 1] = 0;
        Backtrack(i , j + 1);
        x[i][j + 1] = 1;
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < m ;j++)
        {
            cin >> a[i][j];
        }
    }
    memset(x, 1, sizeof(x));
    res = 0;
    a[0][0] = 0;
    Backtrack(0 , 0);
    cout << res;
}
