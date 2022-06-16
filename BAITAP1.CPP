#include<bits/stdc++.h>
using namespace std;
int a[1000001], n, ans = 0, ii;
long long k;
map<long long, int> mp;
int main()
{
    cin>>n>>k;
    for(int i = 1; i <= n; i++)
        cin>>a[i];
    long long x, s = 0;
    for(int i = 1; i <= n; i++)
    {
        s += a[i];
        if(s == k) ans = i;
        else
        {
           x = s - k;
           if(mp[x] > 0)
           {
               ii = mp[x];
               ans = max(ans, i - ii);
           }
           if(mp[s] == 0) mp[s] = i;
        }
    }
    cout<<ans;
}
