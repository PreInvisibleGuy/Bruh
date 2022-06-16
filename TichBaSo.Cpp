#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],fx[200005],fz[200005],x,y,z;
int main()
{
        ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("TichBaSo.Inp  ","r",stdin);
freopen("TichBaSo.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>x>>y>>z;
  fx[1]=x*a[1];fz[n]=z*a[n];
  for(int i=2;i<=n;i++)
      fx[i]=max(fx[i-1],x*a[i]);
  for(int i=n-1;i>=1;i--)
      fz[i]=max(z*a[i],fz[i+1]);
  long long ans=x*a[1]+y*a[2]+z*a[3];
  for(int j=2;j<=n-1;j++)
  {
      long long e=y*a[j]+fx[j-1]+fz[j+1];
      ans=max(ans,e);
  }
  cout<<ans;

}
