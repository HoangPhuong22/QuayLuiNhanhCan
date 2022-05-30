#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int sum = accumulate(a , a + n , 0);
    if(sum % 2 != 0)
    {
        cout << 0;
    }
    else
    {
        sum /= 2;
        bool dp[sum + 1];
        memset(dp , 0 , sizeof(dp));
        dp[0] = 1;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = sum ; j >= a[i] ; j--)
            {
                if(dp[j - a[i]])
                {
                    dp[j] = 1;
                }
            }
        }
        if(dp[sum]) cout << 1;
        else cout << 0;
    }
}
