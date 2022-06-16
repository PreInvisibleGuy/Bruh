#include<bits/stdc++.h>
using namespace std;
int a[100001],n;
int main()
{
  ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("SEQ1.INP  ","r",stdin);
//freopen("SEQ1.OUT","w ",stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
     int ma=-1e9, mi = a[1];
     for (int i = 2; i <= n; i++)
      {
       ma = max(ma, a[i] - mi);
       mi = min(mi, a[i]);
      }
      cout << ma;
}
