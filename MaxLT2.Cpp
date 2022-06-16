#include<bits/stdc++.h>
using namespace std;
long long n,a[500006],s,ml[500005],mr[500005];
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("MaxLT2.Inp ","r",stdin);
freopen("MaxLT2.Out","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
   ml[1]=a[1];
   s=a[1];
   for(int i=2;i<=n;i++)
  {
      if(s<0)
            s=0;
    s=s+a[i];
      ml[i]=max(ml[i-1],s);
  }
  mr[n]=a[n];
  s=a[n];
  for(int i=n-1;i>=1;i--)
  {
      if(s<0)
        s=0;
      s=s+a[i];
      mr[i]=max(mr[i+1],s);
  }
  long long ans=a[1]+a[2];
  for(int i=1;i<=n;i++)
    ans=max(ans,ml[i]+mr[i+1]);
  cout<<ans;
}
