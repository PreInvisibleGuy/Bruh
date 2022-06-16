#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],b[1000001],m,ans=0;
map<long long,long long> mp,np;
int main()
{
    ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("ScoreAB.Inp ","r",stdin);
     freopen("ScoreAB.out ","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
            mp[a[i]]++;
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>b[i];
        np[b[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        long long x=mp[a[i]]*np[a[i]];
        ans=max(ans,x);
    }
    cout<<ans;

}
