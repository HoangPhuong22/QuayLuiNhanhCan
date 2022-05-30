#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool ant(char x , char y)
{
    return abs((x - '0') - (y - '0')) == 1;
}

bool check(string s)
{
    for(int i = 1 ; i < s.length() -1 ; i++)
    {
        if(ant(s[i] , s[i - 1]) || ant(s[i + 1] , s[i]))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n ; cin >> n;
    string s = "";
    for(int i = 1 ; i <= n ;i++) s += to_string(i);
    vector<string> v;
    do
    {
        v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    for(string x : v)
    {
        if(check(x)) cout << x << endl;
    }
}
