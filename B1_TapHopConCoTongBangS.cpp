#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1001], x[1001], s , k, n , res;

void Backtrack(int sum , int cnt,int pos)
{
    if(sum == s && cnt == k)
    {
        ++res;
        return;
    }
    for(int j = pos ; j <= n ; j++)
    {
        if(sum + j <= s)
        {
            Backtrack(sum + j , cnt + 1, j + 1);
        }
    }
}

int main()
{
    cin >> n >> k >> s;
    res = 0;
    Backtrack(0 ,0 , 1);
    cout << res;
}
