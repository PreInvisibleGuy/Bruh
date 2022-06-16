#include<bits/stdc++.h>
using namespace std;
long long f[1000001],n,a[1000001],t;
int main()
{
      ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("SumMaxC.Inp  ","r",stdin);
  freopen("SumMaxC.Out","w",stdout);
    cin>>t;
    while(t--)
    {
        cin>>n;
     for(int i=1;i<=n;i++)
        cin>>a[i];
    f[1]=a[1];
    for(int i=2;i<=n;i++)
        f[i]=a[i]+max(0LL,f[i-1]);
    long long ans=*max_element(f+1,f+1+n);
    cout<<ans<<'\n';
    }

}
