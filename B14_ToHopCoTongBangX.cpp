#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n , a[1001] , x[1001], s , ok;
vector<string>v;
void backtrack(int i , int sum , int pos)
{
    if(sum == s)
    {
        string res = "";
        res +="{";
        for(int j = 0 ; j < i ; j++)
        {
            res += to_string(x[j]) ;
            if(j != i - 1) res += " ";
            else res += "}";
        }
        v.push_back(res);
    }
    for(int j = pos ; j <= n ;j++)
    {
        if(sum + a[j] <= s)
        {
            x[i] = a[j];
            backtrack(i + 1 , sum + a[j] , j);
        }
    }
}

int main()
{
    cin >> n >> s;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    sort(a + 1 ,a + n + 1);
    backtrack(0 , 0 , 1);
    if(v.size() == 0)
    {
        cout << -1;
        return 0;
    }
    cout << v.size() << endl;
    for(string x : v)
    {
        cout << x << endl;
    }
}
