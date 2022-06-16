#include<bits/stdc++.h>
using namespace std;
long long n,a[500005],x=0,ans=0,s[500005],e;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
//freopen("SEQ4.Inp   ","r",stdin);
//freopen("SEQ4.Out ","w ",stdout);
      cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        s[i]=s[i-1]+a[i];
    }
    int ans=0,l,r,m;
    for(int i=1;i<=n;i++)
    {
      l=i;
      r=n;
      while(l<=r)
      {
          m=(l+r)/2;
          e=s[m]-s[i-1];
          if(e>0){ans=max(ans,m-i+1);l=m+1;}
          else
               r=m-1;
      }

    }
    cout<<ans;
}
