#include<bits/stdc++.h>
using namespace std;
long long n,a[10001],s=1,ans=0,x=0;
long long mp[10001];
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("DEMHANG.INP ","r",stdin);
freopen("DEMHANG.OUT","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
     for(int i=1;i<=n;i++)
        mp[a[i]]++;
    x=mp[a[1]];
    for(int i=1;i<=n;i++)
    {
          if(mp[a[i]]>x)
{
    ans=a[i];
    x=mp[a[i]];
}
    }
    cout<<ans<<' '<<x;
    return 0;

}
