#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[9][9] , c[101] , d1[101] , d2[101] ,m, n , res;
int s = 0;
void Backtrack(int i)
{
   for(int j = 1 ; j <= n ; j++)
   {
       if(!c[j] && !d1[i - j + n] && !d2[i + j - 1])
       {
           c[j] = d1[i - j + n] = d2[i + j - 1] = 1;
           s += a[i][j];
           if(i == n)
           {
               res = max(res , s);
           }
           Backtrack(i + 1);
           s -= a[i][j];
           c[j] = d1[i - j + n] = d2[i + j - 1] = 0;
       }
   }
}

int main()
{
    n = 8;
    for(int i = 1 ; i <= 8 ; i++)
    {
        for(int j = 1 ; j <= 8 ; j++)
        {
            cin >> a[i][j];
        }
    }
    res = 0;
    Backtrack(1);
    cout << res;
}
