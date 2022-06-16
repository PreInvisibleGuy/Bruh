#include<bits/stdc++.h>
using namespace std;
int m,n,a[1000001],b[1000001];
map<int,int> mp;
int check(int x)
{
    int l,r,mi;
    l=1;r=m;
    while(l<=r)
    {
        mi=(l+r)/2;
        if(a[mi]==x)
            return 0;
        if(x<a[mi])
            r=mi-1;
        else
            l=mi+1;
    }
    return 1;
}
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     freopen("COUNTN.INP","r",stdin);
     freopen("COUNTN.OUt","w",stdout);
    cin>>m>>n;
    for(int i=1;i<=m;i++)
      {
        cin>>a[i];
        mp[a[i]]++;
      }
    for(int i=1;i<=n;i++)
        cin>>b[i];
    sort(b+1,b+1+n);
    int ans=(mp[b[1]]==0);
    for(int i=2;i<=n;i++)
    {
        if(b[i]>b[i-1])
            ans=ans+(mp[b[i]]==0);
    }
    cout<<ans;

    }
