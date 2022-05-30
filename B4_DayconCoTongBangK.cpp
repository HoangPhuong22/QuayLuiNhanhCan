#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1001], x[1001], s, n;

void Backtrack(ll sum , ll i, ll pos)
{
    if(sum == s)
    {
        cout << "[" ;
        for(int j = 0 ; j < i ; j++)
        {
            cout << x[j];
            if(j != i - 1) cout << " ";
            else cout << "]";
        }
        cout << endl;
    }
    for(ll j = pos ; j < n ;++j)
    {
        if(sum + a[j] <= s)
        {
            x[i] = a[j];
            Backtrack(sum + a[j] , i + 1 , j + 1);
        }
    }
}

int main()
{
    cin >> n >> s;
    for(ll i = 0 ; i < n ;i++) cin >> a[i];
    sort(a , a + n);
    Backtrack(0 , 0 , 0);
}
