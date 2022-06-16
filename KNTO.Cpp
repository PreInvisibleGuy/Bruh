#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long  n;
  ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("KNTO.INP ","r",stdin);
  freopen("KNTO.OUT","w",stdout);
 cin >> n;
 long long  ans = 1,s = 0;
 long long  i = 2;
 while (true)
 {
  if (i*i > n) break;
  if (n % i == 0)
  {
   ++s;
   long long  x = 0;
   while (n % i == 0)
   {
    x++;
    n /= i;
   }
   ans *= (x + 1);
  }
  i++;
 }
 if (n != 1)
 {
  ans *= 2;
  s++;
 }
 cout << ans - s;
}
