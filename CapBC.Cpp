#include<bits/stdc++.h>
using namespace std;
int t,n,a[200002],l,r;
void solve()
{
    long long ans=0;
    sort(a+1,a+1+n);
    for(int i=1;i<=n-1;i++)
    {
    int k,t=n,dau,cuoi,giua;
    dau=i+1;cuoi=n;
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        if(a[i]+a[giua]>=l)
        {
            t=giua;cuoi=giua-1;
        }
        else
            dau=giua+1;
    }
    k=i;
    dau=i+1;cuoi=n;
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        if(a[i]+a[giua]<=r)
        {

            k=giua;dau=giua+1;
        }
        else
            cuoi=giua-1;
    }
    ans+=max(0,k-t+1);
    }
    cout<<ans<<'\n';
}
int main()
{
      ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CapBC.INP ","r",stdin);
    freopen("CapBC.OUT","w",stdout);
    cin>>t;
    while(t--)
    {
      cin>>n>>l>>r;
      for(int i=1;i<=n;i++)
        cin>>a[i];
      solve();
    }
}
