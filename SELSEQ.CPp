#include<bits/stdc++.h>
using namespace std;
long long a[1000001],s=0,n,f[1000001];
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
   freopen("SELSEQ.INP  ","r",stdin);
  freopen("SELSEQ.Out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    f[1]=a[1];
    f[2]=max(a[1],a[2]);
    for(int i=3;i<=n;i++)
    {
     long long x=a[i];
     long long y=f[i-1];
     long long u=a[i]+f[i-2];
     f[i]=max(x,max(y,u));
    }
    cout<<f[n];

}
