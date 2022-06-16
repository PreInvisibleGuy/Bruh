#include<bits/stdc++.h>
using namespace std;
int s=0,a[1000001],n,ans=0;
int main()
{
          ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
freopen("MAXGIF.INP     ","r",stdin);
freopen("MAXGIF.Out  ","w ",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
      for(int i=2;i<=n;i++)
      {
          s=a[i]+a[i-1];
          ans=max(s,ans);
      }
      cout<<ans;

}
