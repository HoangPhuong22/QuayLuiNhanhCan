#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int c[101] , d1[101] , d2[101] ,m, n , res;
int s = 0;
void Backtrack(int i)
{
   for(int j = 1 ; j <= n ; j++)
   {
       if(!c[j] && !d1[i - j + n] && !d2[i + j - 1])
       {
           c[j] = d1[i - j + n] = d2[i + j - 1] = 1;
           if(i == n)
           {
               ++res;
           }
           Backtrack(i + 1);
           c[j] = d1[i - j + n] = d2[i + j - 1] = 0;
       }
   }
}

int main()
{
    cin >> n;
    res = 0;
    Backtrack(1);
    cout << res;
}
