#include<bits/stdc++.h>
using namespace std;
long long s[200001],mi[200002],ma[200002],a[200002],n,l,r,q;
int main()
{
      ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SumQ.Inp","r",stdin);
    freopen("SumQ.Out","w ",stdout);
  cin>>n>>q;
  a[0]=0;
  for(int i=1;i<=n;i++)
    cin>>a[i];
  for(int i=1;i<=n;i++)
    s[i]=s[i-1]+a[i];
  mi[0]=0;
  for(int i=1;i<=n;i++)
   mi[i]=min(mi[i-1],s[i]);
  ma[n]=s[n];
  for(int i=n-1;i>=1;i--)
   ma[i]=max(ma[i+1],s[i]);
  while(q--)
  {
cin>>l>>r;
cout<<ma[r]-mi[l-1]<<'\n';
  }


}
