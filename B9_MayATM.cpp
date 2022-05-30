#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1001] , s , res , n;

void ATM(ll sum , ll i, ll pos)
{
    if(sum == s)
    {
        res = min(res , i);
        return;
    }
    for(ll j = pos ; j < n ;++j)
    {
        if(sum + a[j] <= s)
        {
            ATM(sum + a[j] , i + 1 , j + 1);
        }
    }
}

int main()
{
    cin >> n >> s;
    for(ll i = 0 ; i < n ;i++) cin >> a[i];
    res = 1e9;
    ATM(0,0,0);
    if(res != 1e9 && res != 0) cout << res << endl;
    else cout << -1 << endl;
}
