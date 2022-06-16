#include<bits/stdc++.h>
using namespace std;
long long ans=0,a[500005],n,x=0,k,e,sum;
long long s[500005];
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
 freopen("ChonSH.Inp  ","r",stdin);
freopen("ChonSH.Out ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>sum;
    for(int i=1;i<=n;i++)
    {
        s[i]=s[i-1]+a[i];
    }
    long long ans=0,l,r,m;
    for(long long i=1;i<=n;i++)
    {
      l=i;
      r=n;
      while(l<=r)
      {
          m=(l+r)/2;
          e=s[m]-s[i-1];
          if(e<=sum){ans=max(ans,m-i+1);l=m+1;}
          else
               r=m-1;
      }

    }
    cout<<ans;

}
