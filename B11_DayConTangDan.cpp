#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n , a[21] , x[21];
vector<string>v;

void Backtrack(int i , int pos)
{
    if(i >= 2)
    {
        string res = "";
        for(int j = 0 ; j < i ; j++)
        {
            res += to_string(x[j]) + " ";
        }
        v.push_back(res);
    }
    for(int j = pos ; j < n ; j++)
    {
        if(a[j] > x[i - 1])
        {
            x[i] = a[j];
            Backtrack(i + 1, j + 1);
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    Backtrack(0 , 0);
    sort(v.begin(), v.end());
    for(string x : v) cout << x << endl;
}
