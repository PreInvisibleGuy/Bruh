#include<bits/stdc++.h>
using namespace std;
long long f[200002],n,a[200001],t,k,sum[200002],g[200002];
long long solve()
{
    f[1]=a[1];sum[1]=a[1];
    for(int i=2;i<=n;i++)
    {
        f[i]=a[i]+max(0LL,f[i-1]);
        sum[i]=sum[i-1]+a[i];
    }
    g[k]=sum[k];
    for(int i=k+1;i<=n;i++)
    {
        g[i]=sum[i]-sum[i-k]+max(0LL,f[i-k]);
    }
    return *max_element(g+k,g+1+n);

}
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("SumMaxK.Inp  ","r",stdin);
 freopen("SumMaxK.Out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
     for(int i=1;i<=n;i++)
        cin>>a[i];
    cout<<solve()<<endl;
    }

}

