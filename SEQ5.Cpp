#include<bits/stdc++.h>
using namespace std;
int a[1000001], n, ans = 0, ii;
long long k;
map<long long, int> mp;
int main()
{
         ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("SEQ5.Inp   ","r",stdin);
//freopen("SEQ5.Out ","w ",stdout);
    cin>>n>>k;
    for(int i = 1; i <= n; i++)
        cin>>a[i];
    long long x, s = 0;
    for(int i = 1; i <= n; i++)
    {
        s += a[i];
        if(s == k) ans++;
        else
        {
           x = s - k;
           if(mp[x] > 0)
           {
               ii = mp[x];
               ans++;
           }
           if(mp[s] == 0) mp[s] = i;
        }
    }
    cout<<ans;
}
